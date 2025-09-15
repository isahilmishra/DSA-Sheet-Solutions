class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        //int m=brokenLetters.size();
        unordered_map<char,int> mp;
        for(char c: brokenLetters){
            mp[c]=1;
        }
        int wordCnt=0;
        int cnt=0;
        for(int i=0; i<text.size(); i++){
            if(text[i]==' '){
                if(cnt==0) wordCnt++;
                cnt=0;
            }
            else{
            if(mp.find(text[i])!=mp.end()){
                cnt++;
            }
          }
        }
        if(cnt==0) wordCnt++;
        return wordCnt;
    }
};