class Solution {
public:
    bool isTrionic(vector<int>& nums) {
        int n=nums.size();
        if(n<3) return false;
        int p=0;
        while(p+1<n && nums[p+1]>nums[p]) p++;
        if(p==0 || p==n-1) return false;

        int q=p;
        while(q+1<n && nums[q]>nums[q+1]) q++;
        if(q==p || q==n-1) return false;
        for(int i=q+1; i<n; i++){
            if(nums[i-1]>=nums[i]) return false;
         }
         return true;
    }
};