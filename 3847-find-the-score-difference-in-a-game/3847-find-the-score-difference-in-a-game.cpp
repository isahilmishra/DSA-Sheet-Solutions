class Solution {
public:
    int scoreDifference(vector<int>& nums) {
        int n=nums.size();
        int first=0,second=0;
        bool chance=true;
        for(int i=0; i<n; i++){
            if(nums[i]&1){
                chance= !chance;
            }
            if((i+1)%6==0)  chance=!chance;

            if(chance) first+=nums[i];
            else second+=nums[i];
        }
        return first-second;
    }
};