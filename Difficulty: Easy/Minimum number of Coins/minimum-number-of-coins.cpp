// User function Template for C++

class Solution {
  public:
    vector<int> minPartition(int N) {
        // code here
       int arr[10]={1,2,5,10,20,50,100,200,500,2000}; 
       vector<int> temp;
       for(int i=9; i>=0; i--){
           if(arr[i]>N) continue;
           else{
               while(arr[i]<=N){
                   N-=arr[i];
                   temp.push_back(arr[i]);
               }
           }
       }
       return temp;
    }
};