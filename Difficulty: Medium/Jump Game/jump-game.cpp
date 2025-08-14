// User function Template for C++

class Solution {
  public:
    // Function to check if we can reach the last index from 0th index.
    bool canReach(vector<int> &nums) {
        // code here
        int n=nums.size();
        if(n==1) return true;
        int farthest=0;
        for(int i=0; i<n; i++){
            if(i>farthest) return false;
            farthest=max(farthest, i+nums[i]);
        }
        return true;
    }
};