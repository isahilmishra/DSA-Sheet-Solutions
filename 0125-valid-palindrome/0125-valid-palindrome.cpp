class Solution {
public:
    bool isPalindrome(string s) {
       string p;
       for(char c : s){
          if(isalnum(c)){
            p+= tolower(c);
          }
       }
       string q=p;
       reverse(q.begin(),q.end());
       return p==q;
    }
};