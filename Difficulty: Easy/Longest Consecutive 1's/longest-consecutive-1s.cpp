class Solution {
  public:
    int maxConsecutiveOnes(int n) {
        // code here
        vector<int>ans;
        while(n>0){
            int digit= n%2;
            ans.push_back(digit);
            n=n/2;
        }
        ans.push_back(n);
        
        int  l=0, r=0 , maxLen=0;
        while(r<ans.size()){
            if(ans[r]==0){
                l=r+1;
            }
            maxLen= max(maxLen, r-l+1);
            r++;
        }
        return maxLen;
    }
};
