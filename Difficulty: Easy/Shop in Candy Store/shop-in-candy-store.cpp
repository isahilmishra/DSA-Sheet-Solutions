class Solution {
  public:
    vector<int> minMaxCandy(vector<int>& prices, int k) {
        // Code here
        sort(prices.begin(),prices.end());
        int n=prices.size();
        
        int cntMin=0;
        int l=0, r=n-1;
        while(l<=r){
            cntMin+=prices[l];
            l++;
            r-=k;
        }
        l=0; r=n-1;
        int cntMax=0;
        while(l<=r){
            cntMax+=prices[r];
            r--;
            l+=k;
        }
        return {cntMin, cntMax};
    }
};