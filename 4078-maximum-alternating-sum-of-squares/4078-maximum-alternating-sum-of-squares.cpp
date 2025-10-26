class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int n=nums.size();
        for(auto &x:nums) x=x*x;
        sort(nums.begin(),nums.end());
        long long val=0;
        for(int i=0; i<n/2; i++) val-=nums[i];
        for(int i=n/2; i<n; i++) val+=nums[i];
        return val;
    }
};