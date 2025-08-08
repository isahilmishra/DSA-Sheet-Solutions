class Solution {
public:
    int numSubarraysWithSum(vector<int>& arr, int goal) {
    unordered_map<int, int> mpp;
    mpp[0]=1;
    int preSum=0; int cnt=0;

    for(int i=0; i<arr.size(); i++){
        preSum+=arr[i];
        int remove= preSum-goal;
        cnt+=mpp[remove];
        mpp[preSum]++;
    }
    return cnt;
    }
};