class Solution {
public:
    int reverse(int x) {
        int num=x;
        long revNum=0;
        while(x!=0){
            int ld= x%10;
            revNum = revNum*10 +ld;
            x=x/10;
        }
        if(revNum>INT_MAX || revNum< INT_MIN) return 0;
        else return revNum;
    }
};