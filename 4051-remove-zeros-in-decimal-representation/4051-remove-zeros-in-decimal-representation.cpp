class Solution {
public:
    long long removeZeros(long long n) {
        string ans="";
        while(n>0){
            long long d=n%10;
            if(d!=0){
                ans+=(d+'0');
            }
            n/=10;
        }
        reverse(ans.begin(),ans.end());
        return stoll(ans);
    }
};