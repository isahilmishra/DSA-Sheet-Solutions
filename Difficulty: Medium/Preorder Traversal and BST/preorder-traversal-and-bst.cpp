// User function Template for C++

class Solution {
  public:
    int i=0;
    void solve(int arr[], int& N,int mini,int maxi){
        if(i>=N){
            return;
        }
        if(arr[i]<mini || arr[i]>maxi){
            return ;
        }
        int curr=arr[i];
        i++;
        solve(arr,N,mini,curr);
        solve(arr,N,curr,maxi);
        return;
        
    }
    int canRepresentBST(int arr[], int N) {
        // code here
        int mini=INT_MIN;
        int maxi=INT_MAX;
        solve(arr,N,mini,maxi);
        if(i>=N){
            return 1;
        }
        return 0;
    }
};