class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n=nums.size();
        vector<int>hashM(n+1,0);
        for(int&x : nums) hashM[x]++;
        vector<int>ans;
        for(int i=1; i<=n; i++){
            if(hashM[i]==2) ans.push_back(i);
        }
        return ans;
    }
};