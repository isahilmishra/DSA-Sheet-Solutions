class Solution {
public:
    int integerReplacement(int n) {
        long long num=n;
        int cnt=0;
        while(num!=1){
            if(num&1){
                if(num==3||num%4==1) num--;
                else num++;
            }
            else{
                num/=2;
            }
            cnt++;
        }
        return cnt;
    }
};