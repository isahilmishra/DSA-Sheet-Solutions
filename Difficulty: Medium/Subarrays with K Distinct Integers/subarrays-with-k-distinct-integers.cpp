class Solution {
  public:
   int atMost(vector<int>& nums, int k){
        unordered_map<int, int> mp;
        int l=0,r=0, cnt=0;
        while(r<nums.size()){
            mp[nums[r]]++;
            while(mp.size()>k){
                mp[nums[l]]--;
                if(mp[nums[l]]==0) mp.erase(nums[l]);
                l++;
            }
            cnt+=(r-l+1);
            r++;
        }
        return cnt;
   }
    int exactlyK(vector<int> &arr, int k) {
        // code here
        return atMost(arr, k) - atMost(arr, k-1);
    }
};