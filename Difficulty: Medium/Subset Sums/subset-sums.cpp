class Solution {
  public:
    void findSum(int ind, vector<int> &arr, vector<int> &ans,vector<int> &ds){
        if(ind==arr.size()){
            int sum=accumulate(ds.begin(),ds.end(),0);
            ans.push_back(sum);
            return;
        }
        //include arr[ind]
        ds.push_back(arr[ind]);
        findSum(ind+1, arr, ans, ds);
        ds.pop_back();
       
        //exclude arr[ind] 
        findSum(ind+1, arr, ans, ds);
    }
    vector<int> subsetSums(vector<int>& arr) {
        // code here
            vector<int> ans;
            vector<int> ds;
            findSum(0,arr,ans,ds);
            return ans;
    }
};