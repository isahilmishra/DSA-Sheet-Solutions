class Solution {
public:
    int lengthOfLongestSubstring(string input) {
         vector<int> hashMap(256,-1);
         int n= input.size();
         int l=0, r=0; int maxLen=0;
         while(r<n){
            if(hashMap[input[r]]!=-1){
                if(hashMap[input[r]]>=l){
                    l=hashMap[input[r]]+1;
                }
            }
            int len=r-l+1;
            maxLen= max(len, maxLen);
            hashMap[input[r]]=r;
            r++;
         }
         return maxLen;
    }
};