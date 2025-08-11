class Solution {
public:
    vector<int> productQueries(int n, vector<vector<int>>& queries) {
        vector<int> powers;
        int M= 1e9+7; 
        int product=1;
        while(n>0){
            if(n%2==1){
                powers.push_back(product);
            }
            n/=2;
            product*=2;
        }
        vector<int> ans;
        for(auto &q : queries){
            long long prod=1;
            for(int j=q[0]; j<=q[1]; j++){
                prod= (prod * powers[j])%M;
            }
            ans.push_back(prod);
        }
        return ans;
    }
};