class Solution {
public:
    int maxDepth(string s) {
        int depth=0;
        int cnt=0;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='(') {
                depth++;
            }
            else if(s[i]==')'){
                 depth--; 
            }
            cnt= max(cnt, depth);
        }
        return cnt; 
    }
};