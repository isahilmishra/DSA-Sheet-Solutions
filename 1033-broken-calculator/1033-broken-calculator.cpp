class Solution {
public:
    int brokenCalc(int startValue, int target) {
        int cnt=0;
        while(target>startValue){
            if(target%2!=0){
                target=target+1;
                cnt++;
            }
            target=target/2;
            cnt++;
        }
          cnt+= startValue-target;
          return cnt;
    }
};