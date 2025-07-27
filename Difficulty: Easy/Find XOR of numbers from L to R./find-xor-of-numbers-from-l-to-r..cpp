// User function Template for C++

class Solution {
  public:
   int func(int N){
     if(N%4==1) return 1;
     if(N%4==2) return N+1;
     if(N%4==3) return 0;
     else return N;
 }
    int findXOR(int l, int r) {
        // complete the function here
        return func(l-1)^func(r);
    }
};