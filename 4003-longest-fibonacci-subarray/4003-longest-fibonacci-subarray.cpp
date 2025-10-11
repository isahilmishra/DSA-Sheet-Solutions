class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n=nums.size();
        int len=2;
        int maxLen=2;
        for(int r=2; r<n; r++){
            if(nums[r]==nums[r-1]+nums[r-2]){
              len++;
              maxLen=max(maxLen,len);
            }
            else{
                len=2;
            } 
        }
        return maxLen;
    }
};