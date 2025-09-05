class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        //stack<int>st;
        vector<int>ans;
        for(int i=0; i<prices.size(); i++){
          bool flag=false;
          for(int j=i+1; j<prices.size(); j++){
                   if(prices[j]<=prices[i]){
                    int diff= prices[i]-prices[j];
                    ans.push_back(diff);
                    flag=true;
                    break;
                 }
             }
             if(!flag) ans.push_back(prices[i]);
        }
       return ans;
    }
};