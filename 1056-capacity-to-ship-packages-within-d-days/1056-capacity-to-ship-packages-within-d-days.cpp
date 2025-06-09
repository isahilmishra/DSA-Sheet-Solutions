class Solution {
public:
    int findDays(vector<int> &weights,int capacity){
        int sum=0; int cnt=1;
        for(int i=0; i<weights.size(); i++){
            if(sum + weights[i] >capacity){
                sum=weights[i]; cnt++;
            }
            else sum+=weights[i];
        }
        return cnt;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int low=*max_element(weights.begin(),weights.end());
         int high= accumulate(weights.begin(),weights.end(),0);
        int ans=high;
        while(low<=high){
            int mid=(low+high)/2;
            if(findDays(weights,mid)<=days){
                ans=mid;
                high=mid-1;
            }
            else low=mid+1;
        }
        return low;
    }
};