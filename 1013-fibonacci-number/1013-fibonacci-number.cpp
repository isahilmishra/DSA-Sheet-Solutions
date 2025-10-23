class Solution {
public:
    int helper(int n, vector<int>&dp){
        if(n<=1) return dp[n]=n;
        if(dp[n]!=-1) return dp[n];
        return dp[n]= helper(n-1,dp) + helper(n-2,dp);
    }
    int fib(int n) {
       vector<int> dp(n+1,-1);
       return helper(n,dp);
    }
    /*
    int fib(int n) {
      if(n==0) return 0;
      if(n==1) return 1;

      return fib(n-1)+fib(n-2);
    }
    */
};