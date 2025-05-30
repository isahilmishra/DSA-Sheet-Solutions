class Solution {
  public:
    bool isPrime(int n) {
        // code here
        int cnt=0;
        for(int i=1; i<=sqrt(n);i++){
            if(n%i==0) {
                cnt++;
            
            if(n/i!=i) cnt++;
            }
        }
        if(cnt==2) return true;
        else return false;
    }
};
