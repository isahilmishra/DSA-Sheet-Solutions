class Solution {
public:
    int fib(int n){
        if(n<=1) return n;
        int prev2=0; int prev=1;
        for(int i=2; i<=n; i++){
            int curi=prev2+prev;
            prev2=prev;
            prev=curi;
        }
        return prev;
    }
   /*
    int fib(int n){
        //Tabulation
        if(n<=1) return n;

        vector<int>dp(n+1,-1);
        dp[0]=0; 
        dp[1]=1;
        for(int i=2; i<=n; i++){
            dp[i]=dp[i-1]+dp[i-2];
        }
        return dp[n];
    }
    */
   /*
   //Memoization
    int helper(int n, vector<int>&dp){
        if(n<=1) return dp[n]=n;
        if(dp[n]!=-1) return dp[n];
        return dp[n]= helper(n-1,dp) + helper(n-2,dp);
    }
    int fib(int n) {
       vector<int> dp(n+1,-1);
       return helper(n,dp);
    }
    */
    /*
    int fib(int n) {
      if(n==0) return 0;
      if(n==1) return 1;

      return fib(n-1)+fib(n-2);
    }
    */
};