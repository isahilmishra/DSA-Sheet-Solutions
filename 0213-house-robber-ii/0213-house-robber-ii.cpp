class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        
        if(n==1) return nums[0];

        vector<int> temp1(nums.begin()+1,nums.end());
        vector<int>temp2(nums.begin(),nums.end()-1);
        
        long long ans1= helper(temp1);
        long long ans2=helper(temp2);
        return max(ans1,ans2);
    }

    int helper(vector<int>&arr) {
        int n=arr.size();

        if(n==0) return 0;
        int prev=arr[0];
        int prev2=0;
        for(int i=1;i<n; i++){
            int take=arr[i];
            if(i>1) take+=prev2;
            int notTake=0+prev;
            int curi=max(take,notTake);
            prev2=prev;
            prev=curi;
        }
        return prev;
    }
};