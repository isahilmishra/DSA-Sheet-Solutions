class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int,int> freq;
        long long ans = 0, currSum = 0;
        int l = 0;

        for (int r = 0; r < n; r++) {
            freq[nums[r]]++;
            currSum += nums[r];

            // keep window size = k
            if (r - l + 1 > k) {
                freq[nums[l]]--;
                currSum -= nums[l];
                if (freq[nums[l]] == 0) {
                    freq.erase(nums[l]);
                }
                l++;
            }

            // check if window is valid
            if (r - l + 1 == k && freq.size() == k) {
                ans = max(ans, currSum);
            }
        }

        return ans;
    }
};
