class Solution {
public:
    int totalMoney(int n) {
       int sum=0;
       int val=1; int lastW=1; 
       int cnt=0;
       for(int i=1; i<=n; i++){
         sum+=val;
         val++; cnt++;
         if(cnt==7){
            lastW++;
            val=lastW;
            cnt=0;
         }
       }
       return sum;
    }
};