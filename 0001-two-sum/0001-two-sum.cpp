class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int,int>> arr; // {value, original_index}
        for(int i = 0; i < nums.size(); i++) {
            arr.push_back({nums[i], i});
        }
        
        sort(arr.begin(), arr.end()); // sort by value automatically
        
        int l = 0, r = arr.size() - 1;
        while(l < r) {
            int sum = arr[l].first + arr[r].first;
            if(sum == target) {
                return {arr[l].second, arr[r].second}; // return original indices
            }
            else if(sum < target) l++;
            else r--;
        }
        return {-1, -1};
    }
};