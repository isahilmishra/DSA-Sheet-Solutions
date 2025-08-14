// class implemented
/*
struct Item{
    int value;
    int weight;
};
*/

class Solution {
  public:
    double fractionalKnapsack(vector<int>& val, vector<int>& wt, int capacity) {
        // code here
        vector<pair<double,int>> ratio;
        for(int i=0; i<val.size(); i++){
            double rat= (double) val[i]/wt[i];
            ratio.push_back(make_pair(rat, i));
        }
        // Sortong as per the ratio of value/wt;
        sort(ratio.begin(), ratio.end() ,[](pair<double,int> &a, pair<double,int>&b){
            return a.first>b.first;
        });
        
        int n=val.size();
        double ans=0.0;
        for(int i=0; i<n; i++){
            int index=ratio[i].second;
            if(wt[index]<=capacity){
                ans+=val[index];
                capacity-=wt[index];
            }
            else{
                ans+=ratio[i].first*capacity;
                capacity=0;
            }
        }
        return ans;
    }
};
