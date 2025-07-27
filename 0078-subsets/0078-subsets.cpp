class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
     int n=nums.size();
	 int subset=(1<<n);
	 vector<vector<int>>ans;
        for(int num=1; num<=subset; num++){
		 vector<int>subs;
		 for(int i=0; i<n ;i++){
			 if(num & (1<<i) ){
				 subs.push_back(nums[i]);
			 }
		 }
		 ans.push_back(subs);
	 }
	return ans;
    }
};