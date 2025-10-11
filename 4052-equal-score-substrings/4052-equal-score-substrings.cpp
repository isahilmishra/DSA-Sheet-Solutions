class Solution {
public:
    bool scoreBalance(string s) {
       int total=0;
       for(char c:s){
        total+=(c-'a'+1);
       }
       int preSum=0;
       for(int i=0; i<s.size()-1; i++){
          preSum+=(s[i]-'a'+1);
          if(preSum==total-preSum) return true;
       }
       return false;
    }
};