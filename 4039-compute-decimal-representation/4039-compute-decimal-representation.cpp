class Solution {
public:
    vector<int> decimalRepresentation(int n) {
        vector<int> ans;
        long long P=1;
        while(n>0){
            if(n%10!=0){
             int d= (n%10)*P;
             ans.push_back(d);
            }
            n=n/10;
            P=P*10;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};