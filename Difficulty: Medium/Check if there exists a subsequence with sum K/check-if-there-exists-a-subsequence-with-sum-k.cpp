class Solution {
  public:
    bool solve(int sum , int idx,vector<int>&arr,int k , int n){
        if(sum==k){
            return true;
        }
        if(sum>k){
            return false;
        }
        if(sum<k && idx==n){
            return false;
        }
        return solve(sum+arr[idx],idx+1,arr,k,n) || solve(sum,idx+1,arr,k,n);
    }
    bool checkSubsequenceSum(int n, vector<int>& arr, int k) {
        // Code here
    
       return solve(0,0,arr,k,n); 
    }
};