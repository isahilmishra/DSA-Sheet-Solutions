class Solution {
  public:
    int countBitsFlip(int A, int B) {
        // code here
        int res= A^B;
    int cnt=0;
    for(int i=0;i<=31; i++){
        if(res & (1<<i)) cnt++;
    }
   return cnt;
    }
};