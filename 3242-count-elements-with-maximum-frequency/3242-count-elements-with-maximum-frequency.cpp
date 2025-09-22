class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int> freq;
        int mx=0;
        for(int x:nums){
            freq[x]++;
            mx=max(mx, freq[x]);
        }
        int sum=0;
        for(auto it :freq){
            if(it.second==mx) sum+=mx;
        }
        return sum;
    }
};