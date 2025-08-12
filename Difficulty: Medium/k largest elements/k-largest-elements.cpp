class Solution {
  public:
    vector<int> kLargest(vector<int>& nums, int k) {
        // Your code here
        int n=nums.size();
        priority_queue<int, vector<int>, greater<int>> minH;
       for(int i=0; i<n; i++){
          minH.push(nums[i]);
          if(minH.size()>k) minH.pop();
       } 
       vector<int> ans;
       while(!minH.empty()){
          ans.push_back(minH.top());
          minH.pop();
       }
       reverse(ans.begin(),ans.end());
       return ans;
    }
};