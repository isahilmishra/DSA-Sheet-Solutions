class Solution {
public:
    int findSum(int x){
        int val=0;
        while(x>0){
            val+=x%10;
            x=x/10;
        }
        return val;
    }
    int minElement(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n; i++){
            nums[i]=findSum(nums[i]);
        }
        return *min_element(nums.begin(),nums.end());
    }
};