class Solution {
public:
 int findMaxD(vector<int> &nums, int div){
    int n=nums.size();
    int sum=0;
    for(int i=0; i<n ; i++){
        sum+= ceil((double)nums[i]/(double)div);
    }
    return sum;
 }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low=1;
        int high=*max_element(nums.begin(),nums.end());
        int ans=high;
        while(low<=high){
            int mid=(low+high)/2;
            if(findMaxD(nums,mid)<=threshold){
               ans=mid;
               high=mid-1;
            }
            else low=mid+1;
        }
        return ans;
    }
};