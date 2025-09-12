class Solution {
public:
   #define ll long long 
    int divide(int dividend, int divisor) {
        if(dividend==divisor) return 1;
        bool sign=true;
        if(dividend>=0 && divisor<0) sign=false;
	    if(dividend<=0 && divisor>0) sign=false;

        ll n=abs((ll)dividend); ll d= abs((ll)divisor);
        ll quotient=0;
        while(n>=d){
            ll cnt=0;
            while(n>=(d<<(cnt+1)) && (cnt+1)<32 ){
                cnt++;
            }
            quotient+=(1LL<<cnt);
            n-= d*(1LL<<cnt);
           
        }
        if(quotient==(1LL<<31) && sign) return INT_MAX;
        if(quotient==(1LL<<31) && !sign) return INT_MIN;
        return sign? quotient : -quotient;
    }
};