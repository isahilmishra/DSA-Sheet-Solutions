class Solution {
  public:
  int findSubarray(vector<int> &arr, int cap){
    int cnt=1; int indexUsed=0;
    for(int i=0; i<arr.size(); i++){
        if(arr[i]+indexUsed<=cap){
            indexUsed+=arr[i];            
        }
        else{
            cnt++;
            indexUsed=arr[i];
        }
    }
    return cnt;
}
    int splitArray(vector<int>& a, int k) {
        // code here
         int n= a.size();
    if(k>n) return -1;
    int low= *max_element(a.begin(),a.end());
    int high= accumulate(a.begin(),a.end(),0);
    while(low<=high){
        int mid=(low+high)/2;
        int cnt= findSubarray(a,mid);
        if(cnt>k) low=mid+1;
        else high=mid-1; 
    }
    return low;
    }
};