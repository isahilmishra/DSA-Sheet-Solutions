// User function Template for C++

class Solution {
  public:
    long long divide(long long dividend, long long divisor) {
        // code here
        if(dividend==divisor) return 1;
        bool sign=true;
        if(dividend>=0 && divisor<0) sign=false;
	    if(dividend<=0 && divisor>0) sign=false;

        long n=abs((long)dividend); long d= abs((long)divisor);
        long quotient=0;
        while(n>=d){
            long cnt=0;
            while(n>=(d<<(cnt+1)) && (cnt+1)<32 ){
                cnt++;
            }
            quotient+=(1<<cnt);
            n-= d*(1<<cnt);
           
        }
    
        return sign? quotient : -quotient;
    }
};