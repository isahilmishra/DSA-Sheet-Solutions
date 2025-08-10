class Solution {
  public:
    int majorityElement(vector<int>& arr) {
        // code here
        unordered_map<int,int> mp;
        for(int i=0; i<arr.size();++i){
            mp[arr[i]]++;
        }
        int ans=-1;
        for(auto it:mp){
            if(it.second> arr.size()/2){
                ans=it.first;
            }
        }
        return ans;
    }
};