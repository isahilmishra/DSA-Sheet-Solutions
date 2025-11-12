class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n=nums.size();
        int cnt1=0;
        int ops=INT_MAX;
        for(int i=0; i<n; i++){
            if(nums[i]==1) cnt1++;
            int gcd=nums[i];
            for(int j=i+1; j<n; j++){
                gcd=__gcd(gcd,nums[j]);
                if(gcd==1){
                    ops=min(ops,j-i);
                }
            }
        }
        if(cnt1!=0) return n-cnt1;
        else return ops==INT_MAX? -1 : ops+n-1;
    }
};