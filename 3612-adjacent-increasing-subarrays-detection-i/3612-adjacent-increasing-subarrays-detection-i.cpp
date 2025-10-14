class Solution {
public:
    bool isIncreasing(vector<int>&nums, int i, int j){
         while(i<j){
            if(nums[i]>=nums[i+1]) return false;
            i++;
         }
         return true;
    }
    bool hasIncreasingSubarrays(vector<int>& nums, int k) {
       int n=nums.size();
       for(int start=0; start+2*k <=n; start++){
          bool first=isIncreasing(nums,start,start+k-1);
          bool second=isIncreasing(nums,start+k, start+2*k-1);
          if(first==true && second==true) return true;
       }
     return false;
    }
};