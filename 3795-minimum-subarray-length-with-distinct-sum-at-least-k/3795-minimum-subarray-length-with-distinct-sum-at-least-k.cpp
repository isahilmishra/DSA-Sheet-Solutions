class Solution {
public:
    int minLength(vector<int>& nums, int k) {
        int minLen=INT_MAX;
        int n=nums.size();
        unordered_map<int,int>freq;
        int sum=0;
        int l=0;
        for(int r=0; r<n; r++){
            freq[nums[r]]++;
            if(freq[nums[r]]==1) sum+=nums[r];
            while(sum>=k){
                 minLen=min(minLen, r-l+1);
                 freq[nums[l]]--;
                 if(freq[nums[l]]==0){
                    freq.erase(nums[l]);
                    sum-=nums[l];
                 }
                 l++;
            }
        }
        return minLen==INT_MAX? -1 : minLen;
    }
};