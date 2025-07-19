class Solution {
public:
    int mySqrt(int x) {
        int low=1; int high=x;
        int ans=-1;
        if(x==0) return 0;
        while(low<=high){
            int mid= low+(high-low)/2;
            long long square = 1LL*mid*mid;
            if((square)<=x){
                ans=mid;
                low=mid+1;
            }
            else high=mid-1;
        }
        return ans;
    }
};