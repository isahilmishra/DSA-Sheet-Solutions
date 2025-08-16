class Solution {
public:
    int maximum69Number (int num) {
        vector<int> temp;
        int d=num;
        while(d>0){
            temp.push_back(d%10);
            d=d/10;
        }
        for(int i=temp.size()-1; i>=0;--i){
           if(temp[i]==6){
            temp[i]=9;
            break;
           }
        }
        int digit=0; int product=1;
        for(int i=0;i<temp.size(); i++){
           digit+=product*temp[i];
           product*=10;
        }
        return digit;
    }
};