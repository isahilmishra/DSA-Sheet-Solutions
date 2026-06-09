class Solution {
public:
    bool partitionArray(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int>mp;
        int maxFreq=0;
        for(int x:nums){
            mp[x]++;
            maxFreq=max(maxFreq,mp[x]);
        }
        bool ok = false;

        if(n%k==0){
            int groups=n/k;
            if(maxFreq<=groups)ok =true;
        }
        if(ok) return true;
        else return false;
    }
};