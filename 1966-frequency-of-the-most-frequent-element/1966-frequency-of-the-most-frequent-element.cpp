class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        long long total=0;
        int maxF=1;
        int l=0;
        for(int r=0; r<n; r++){
            total+=nums[r];

            while((long long)nums[r]*(r-l+1)-total>k){
                total-=nums[l];
                l++;
            }
            maxF=max(maxF, r-l+1);
        }
        return maxF;
    }
};