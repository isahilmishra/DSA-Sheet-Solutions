class Solution {
public:
    bool areNumbersAscending(string s) {
        vector<int> num;
        for(int i=0; i<s.size(); i++){
            if(isdigit(s[i])){
                int val=0;
                while(i<s.size() && isdigit(s[i])){
                    val= val*10 + (s[i]-'0');
                    i++;
                }
                num.push_back(val);
            }
        }
        for(int i=0; i<num.size()-1;i++){
            if(num[i]>=num[i+1]) return false;
        }
        return true;
    }
};