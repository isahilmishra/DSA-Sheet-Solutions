class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
        long long mx=*max_element(nums.begin(),nums.end());
        long long mn=*min_element(nums.begin(),nums.end());

        return (long long)(mx-mn)*k;
    }
};