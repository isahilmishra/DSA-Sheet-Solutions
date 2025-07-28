class Solution {
  public:
    vector<int> sieve(int n) {
        // code here
        vector<int> prime(n+1);
     for(int i=2; i<=n; i++) prime[i]=1;

     for(int i=2; i*i<=n; i++){
        if(prime[i]==1){
            for(int j= i*i; j<=n; j+=i){
                prime[j]=0;
            }
        }
     }
     vector<int> result;
     for(int i=2; i<=n; i++){
        if(prime[i]==1) result.push_back(i);
     }
     return result;
    }
};