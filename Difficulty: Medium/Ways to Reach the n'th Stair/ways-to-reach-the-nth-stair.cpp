class Solution {
  public:
    int countWays(int n) {
        // your code here
        if(n==1) return 1;
        if(n==0) return 1;
        int prev2=1; int prev=1;
        
        for(int i=2; i<=n; i++){
            int curi=prev2+prev;
            prev2=prev;
            prev=curi;
        }
        return prev;
    }
};
