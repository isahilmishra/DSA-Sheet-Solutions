class Solution {
  public:
    // Function to remove duplicates from the given array.
    vector<int> removeDuplicates(vector<int> & nums) {
        // code here
       set<int> st;
        for (int i = 0; i < nums.size(); i++) {
            st.insert(nums[i]);
        }

        vector<int> ans;
        for (auto val : st) {
            ans.push_back(val);
        }
    
      return ans;
    }
};