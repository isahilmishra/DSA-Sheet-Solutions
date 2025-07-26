class Solution {
  public:
    bool isPowerofTwo(int n) {
        // code here
         if(n<=0) return false;
       int res = n&(n-1);
       if(res==0) return true;
       else return false;
    }
};