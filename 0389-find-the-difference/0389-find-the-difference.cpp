class Solution {
public:
    char findTheDifference(string s, string t) {
       sort(s.begin(),s.end());
       sort(t.begin(), t.end());
       int l=0; int r=0;
       char c;
       bool ok=false;
       while(r<s.size()){
         if(s[l]==t[r]){
            l++;
            r++;
         }
         else{
            c=t[r];
            ok=true;
            break;
         }
       }
       if(!ok) c=t[r];
       return c;
    }
};