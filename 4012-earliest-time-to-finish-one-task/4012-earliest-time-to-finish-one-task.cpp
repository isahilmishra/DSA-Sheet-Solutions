class Solution {
public:
    int earliestTime(vector<vector<int>>& tasks) {
        int ans=INT_MAX;
        for(int i=0; i<tasks.size();++i){
            int sum= accumulate(tasks[i].begin(),tasks[i].end(),0);
            if(sum<ans){
                ans=sum;
            }
        }
        return ans;
    }
};