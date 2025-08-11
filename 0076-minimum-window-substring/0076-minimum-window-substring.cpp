class Solution {
public:
    string minWindow(string s, string t) {
        int minLen= INT_MAX;
        if(s.empty() || t.empty()) return "";
        int hash[126]={0};
        for(int i=0; i<t.size(); i++){
            hash[t[i]]++;
        }
        int l=0,r=0, cnt=0; int sIndex=-1;
        while(r<s.size()){
            if(hash[s[r]]>0) cnt++;
            hash[s[r]]--;
            while(cnt==t.size()){
               if(r-l+1<minLen){
                  minLen=r-l+1;
                  sIndex=l;
               }
               hash[s[l]]++;
               if(hash[s[l]]>0) cnt--;
               l++;
            }
            r++;
        }
        return sIndex==-1? "" : s.substr(sIndex, minLen);
    }
};