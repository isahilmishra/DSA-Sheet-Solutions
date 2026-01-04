class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        int i=0; int cnt=1;
        for(int j=1; j<n; j++){
            if(nums[j]==nums[i] && cnt<2){
                nums[i+1]=nums[j];
                cnt++;
            }
            else{
                if(nums[j]!=nums[i]){
                nums[i+1]=nums[j];
                cnt=1;
                }
                else{
                   continue;
                }
            }
            i++;
        }
       return i+1;       
    }
};