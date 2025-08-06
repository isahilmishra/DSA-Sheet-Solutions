class Solution {
public:
    int lengthOfLongestSubstring(string input) {
         int maxLen=0;
    for(int i=0; i<input.size();++i){
        vector<int> hashMap(256, 0);
        for(int j=i; j<input.size(); ++j){
           if(hashMap[input[j]]==1) break;
            hashMap[input[j]]=1;
           int len= j-i+1;
           maxLen=max(len, maxLen);
        }
    }
    return maxLen;
    }
};