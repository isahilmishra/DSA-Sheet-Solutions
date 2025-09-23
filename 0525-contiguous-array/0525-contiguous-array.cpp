class Solution {
public:
    int findMaxLength(vector<int>& nums) {
     int n=nums.size();
      vector<int>preSum(n,0);
      for(int i=0; i<nums.size(); i++){
         if(nums[i]==0) nums[i]= -1;
      }
      preSum[0]=nums[0];
      for(int i=1; i<nums.size(); i++){
        preSum[i]=nums[i]+preSum[i-1];
      }
      unordered_map<int,int>mp;
      mp[0]=-1;
      int maxi=0;
      for(int i=0; i<n; ++i){
        if(mp.find(preSum[i])!=mp.end()){
            maxi=max(i-mp[preSum[i]],maxi);
        }
        else{
          mp[preSum[i]]=i;
        }
      }
      return maxi;
    }
};