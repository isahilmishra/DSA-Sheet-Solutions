class Solution {
public:
    int characterReplacement(string s, int k) {
       int l=0,r=0,maxLen=0, maxFreq=0;
       int hash[26]={0};
       while(r<s.size()){
        hash[s[r]-'A']++;
        maxFreq=max(maxFreq, hash[s[r]-'A']);
        int size= r-l+1;
        if(size-maxFreq>k){
            hash[s[l]-'A']--; 
            l++;
        }
        if(size-maxFreq<=k){
            maxLen=max(maxLen,size);
        }
        r++;
       }
       return maxLen;
    }
};