class Solution {
public:
    int minimumCost(vector<int>& cost) {
        int n=cost.size();
       
        sort(cost.begin(),cost.end(), greater<int>());

        int ans=0,cnt=0;
        for(int i=0; i<n; i++){
             if(cnt==2){
                cnt=0;
                continue;
            }   
            ans+=cost[i];
            cnt++;
        }
        return ans;
    }
};