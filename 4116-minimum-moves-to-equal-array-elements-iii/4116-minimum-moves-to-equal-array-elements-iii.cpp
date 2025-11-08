class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n=nums.size();
        int val=INT_MIN;
        for(int x:nums){
            val=max(x,val);
        }
        int cnt=0;
        for(int i=0; i<n; i++){
            cnt+=abs(val-nums[i]);
        }
        return cnt;
    }
};