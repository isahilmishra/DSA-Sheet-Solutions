class Solution {
public:
    int countEven(int num) {
        int cnt=0;
        for(int i = 1; i<=num ; i++){
            int sum=0;
            int n = i;
            while(n>0){
                int digit= n%10;
                sum = sum+digit;
                n=n/10;
            } 
             if(sum%2==0){
                cnt++;
             }
        }
        return cnt;
    }
};