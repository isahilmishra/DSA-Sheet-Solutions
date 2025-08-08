class Solution {
  public:
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
    int numberOfSubarrays(vector<int>& arr, int target) {
        // Your code goes here.
        return atMost(arr,target) - atMost(arr,target-1);
    }
};