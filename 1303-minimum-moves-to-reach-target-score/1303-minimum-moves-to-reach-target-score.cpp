class Solution {
public:
    int minMoves(int target, int maxDoubles) {
        int cnt=0;
        while(target>1){
           if(maxDoubles==0){
             cnt+=target-1;
             break;
           }
           if(target&1){
             target--;
             cnt++;
           }
           else{
             target/=2;
             maxDoubles--;
             cnt++;
           }
        }
        return cnt;
    }
};