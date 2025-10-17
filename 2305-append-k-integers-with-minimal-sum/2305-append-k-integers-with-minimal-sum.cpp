class Solution {
public:
    long long minimalKSum(vector<int>& nums, int k) {
        set<int>s(nums.begin(),nums.end());
        long long cur=1;
        long long res=0;
        
        for(int x:s){
            if(x>cur){
                long long cnt=min((long long)k, x-cur);
                res+=(cur+cur+cnt-1)*cnt/2;
                k-=cnt;
                if(k==0) return res;
            }
            cur=x+1;
        }
        if(k>0){
            res+=(cur+cur+k-1)*k/2;
        }
        return res;
    }
};