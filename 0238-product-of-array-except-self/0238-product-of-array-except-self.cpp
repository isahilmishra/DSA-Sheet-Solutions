class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        int prod=1;
        int cnt0=0;
        for(int x: nums){
            if(x==0) cnt0++;
            else prod*=x;
        }
        for(int i=0; i<n; i++){
            if(cnt0>1) nums[i]=0;
            else if(cnt0==1){
                if(nums[i]==0) nums[i]=prod;
                else nums[i]=0;
            }
            else nums[i]=prod/nums[i]; 
        }
       return nums;
    }
};