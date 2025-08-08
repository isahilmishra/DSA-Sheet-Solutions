class Solution {
public:
    int numSubarraysWithSum(vector<int>& arr, int goal) {
      return atMost(arr,goal) - atMost(arr, goal-1);
    }
     int atMost(vector<int>& nums, int k) {
        if (k < 0) return 0;

        int l = 0, sum = 0, count = 0;
        for (int r = 0; r < nums.size(); r++) {
            sum += nums[r];

            while (sum > k) {
                sum -= nums[l++];
            }

            count += r - l + 1;
        }
        return count;
    }
};