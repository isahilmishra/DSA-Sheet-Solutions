class Solution {
public:
     bool isPowerTwo(int x){
        return (x>0) && ((x&(x-1))==0);
    }
    bool reorderedPowerOf2(int n) {
      int temp=n; 
      vector<int> digits;
      while(temp>0){
         digits.push_back(temp%10);
         temp=temp/10;
      }
      sort(digits.begin(), digits.end());
      do{
        if(digits[0]==0) continue;
        long long num=0;
        for(int d: digits){
           num=num*10+d;
        }
        if(isPowerTwo(num)) return true;
      } while(next_permutation(digits.begin(),digits.end()));
      return false;
    }
};