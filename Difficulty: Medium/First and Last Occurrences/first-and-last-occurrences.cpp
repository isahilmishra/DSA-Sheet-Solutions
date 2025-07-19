class Solution {
  public:
  int lowerbound(vector<int>arr,int n,int k){
    int low=0; int high=n-1;
    int first=-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==k){
            first=mid;
            high=mid-1;
        }
        else if(arr[mid]<k) low=mid+1;
        else high=mid-1;
    }
    return first;
}
int upperbound(vector<int>arr,int n,int k){
    int low=0; int high=n-1;
    int last=-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==k){
            last=mid;
            low=mid+1;
        }
        else if(arr[mid]<k) low=mid+1;
        else high=mid-1;
    }
    return last;
}
    vector<int> find(vector<int>& arr, int x) {
        // code here
        int n=arr.size();
     int lb=lowerbound(arr,n,x);
    if(lb==n||arr[lb]!=x) return {-1,-1};
    return {lb, upperbound(arr,n,x)};
    }
};