class Solution {
public:
    int smallestAbsent(vector<int>& nums) {
        int n = nums.size();
        long long sum = accumulate(nums.begin(), nums.end(), 0LL);
        int avg = sum / n;

        unordered_set<int> st(nums.begin(), nums.end());

        int x = max(1, avg + 1);  // start from at least 1
        while (st.find(x) != st.end()) {
            x++;
        }

        return x;
    }
};