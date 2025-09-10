class Solution {
public:
    int minimumTeachings(int n, vector<vector<int>>& languages, vector<vector<int>>& friendships) {
        unordered_set<int> sadUsers;

        for(auto &friends:friendships){
            int u=friends[0]-1; //Convert this to 0 based indexing
            int v=friends[1]-1;

            unordered_set<int> langSet(begin(languages[u]),end(languages[u]));
            bool canTalk=false;
            for(int lang: languages[v]){
                if(langSet.count(lang)){
                    canTalk=true;
                    break;
                }
            }
            if(!canTalk){
                sadUsers.insert(u);
                sadUsers.insert(v);
            }
        }
        //Find ,maximum known languages among sad users 
        vector<int>language(n+1,0);
        int mostKnown=0;
        for(int user:sadUsers){
            for(int lang:languages[user]){
                language[lang]++;
                mostKnown=max(mostKnown,language[lang]);
            }
        }
        return sadUsers.size()-mostKnown;
    }
};