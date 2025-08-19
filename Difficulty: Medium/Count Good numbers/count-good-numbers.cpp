class Solution {
  public:
    #define ll long long
    ll mod =1e9+7;
    ll binaryExp(ll a, ll b){
        ll res=1;
        a=a%mod;
        while(b>0){
            if(b&1){
                res=(res*a)%mod;
            }
            a=(a*a)%mod; //square the base in halves;
            b=b/2;
        }
        return res;
    }
    int countGoodNumbers(long long n) {
        // code here
        ll evenCount= (n+1)/2;
        ll oddCount=n/2;
        return (binaryExp(5,evenCount)*binaryExp(4, oddCount))%mod;
    }
};
