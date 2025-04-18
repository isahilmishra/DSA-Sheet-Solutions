class Solution {
public:
    string removeOuterParentheses(string s) {
        string result="";
        int n= s.size();
        int cnt=0; int i=0;
        while(i<n){
            if(s[i]=='('){
                 if(cnt>0){
                     result+=s[i];
                 }
                  cnt++;
                 }
                 else{
                     cnt--;
                     if(cnt>0){
                         result+=s[i];
                     }
                 }
                  i++;   
            }
            return result;
    }
};