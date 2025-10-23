// User function template for C++
class Solution {
  public:
    // calculate the maximum sum with out adjacent
    int findMaxSum(vector<int>& arr) {
        // code here
        int n=arr.size();
        if(n==0) return arr[0];
        vector<int>dp(n,0);
        dp[0]=arr[0];
        for(int i=1; i<n; i++){
            int take=arr[i];
            if(i>1) take+=dp[i-2];
            int notTake=0+dp[i-1];
            
            dp[i]=max(take,notTake);
        }
        return dp[n-1];
    }
};