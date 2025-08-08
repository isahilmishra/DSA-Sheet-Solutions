class Solution {
  public:
    int cntSubarrays(vector<int> &arr, int k) {
        // code here
    unordered_map<int, int> mpp;
    mpp[0]=1;
    int preSum=0; int cnt=0;

    for(int i=0; i<arr.size(); i++){
        preSum+=arr[i];
        int remove= preSum-k;
        cnt+=mpp[remove];
        mpp[preSum]++;
    }
    return cnt;
    }
};