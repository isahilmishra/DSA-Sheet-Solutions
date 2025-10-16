class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n=nums.size();
        vector<int> hash(n+1,0);
        for(int &x:nums) hash[x]++;
        vector<int> ans;
        for(int i=1; i<=n; i++){
            if(hash[i]==0) ans.push_back(i);
        }
        return ans;
    }
};