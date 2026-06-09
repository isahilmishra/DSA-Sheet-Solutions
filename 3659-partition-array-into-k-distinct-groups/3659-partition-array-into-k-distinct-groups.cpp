class Solution {
public:
    bool partitionArray(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int>mp;
        for(int x:nums) mp[x]++;
        
        bool ok = true;
        if(n%k==0){
            int groups=n/k;
            for(auto it : mp){
                if(it.second>groups) ok=false;
            }
        }
        else return false;

        if(!ok) return false;
        else return true;
    }
};