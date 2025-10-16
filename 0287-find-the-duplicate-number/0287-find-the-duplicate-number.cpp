class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int &x:nums) mp[x]++;
        int res=0;
        for(auto it:mp){
            if(it.second>=2){
                 res=it.first;
                 break;
            }
        }
        return res;
    }
};