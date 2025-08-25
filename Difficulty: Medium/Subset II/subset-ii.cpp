// User function Template for C++

class Solution {

  public:
    void findSubset(int ind, vector<int> &arr, vector<vector<int>>&ans, vector<int> &ds){
        if(ind==arr.size()){
            ans.push_back(ds);
            return;
        }
        ds.push_back(arr[ind]);
        findSubset(ind+1, arr, ans, ds);
        ds.pop_back();
        findSubset(ind+1,arr, ans,ds);
    }
    vector<vector<int>> printUniqueSubsets(vector<int>& nums) {
        // Write your code here
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        vector<int>ds;
        findSubset(0, nums, ans, ds);
        
        //Using set to store unique subsets only..
       set<vector<int>> unique(ans.begin(), ans.end());
       return vector<vector<int>>(unique.begin(), unique.end());
    }
};