class Solution {
public:
    double myPow(double x, int n){
        long long exp=n;
        if(exp<0){
            x=1/x;
            exp=-exp;
        }
        return power(x,exp);
    }
    double power(double x, long long n) {
        if(n==0) return 1;
        else if(n%2==0){
            double digit= myPow(x,n/2);
            return digit*digit;
        }
        return x * myPow(x,n-1);
    }
};