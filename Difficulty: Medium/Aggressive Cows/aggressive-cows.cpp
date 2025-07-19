// User function Template for C++

class Solution {
  public:
   bool canWePlace(vector<int> &stalls, int distance,int k){
    int cntCows=1; int lastCow=stalls[0];
    for(int i=1; i<stalls.size();i++){
        if(stalls[i]-lastCow>=distance){
            cntCows++;
            lastCow=stalls[i];  
        }
        if(cntCows>=k) return true;
    }
    return false;
}

   int aggressiveCows(vector<int> &stalls, int k) {

    int n=stalls.size();
    sort(stalls.begin(),stalls.end());
    int low=1; int high=stalls[n-1]-stalls[0];
    while(low<=high){
         int mid=(low+high)/2;
         if(canWePlace(stalls,mid,k)==true){
             low=mid+1;
         }
         else high=mid-1;
    }
     return high;
    }
};