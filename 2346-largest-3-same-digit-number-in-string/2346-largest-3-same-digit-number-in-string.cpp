class Solution {
public:
    string largestGoodInteger(string num) {
        char maxDigit=' ';
        for(int i=0; i+2<num.size();i++){
            if(num[i]==num[i+1]&& num[i]==num[i+2]){
                maxDigit=max(maxDigit,num[i]);
            }
        }
        return maxDigit==' '? "" : string(3, maxDigit);
    }
};