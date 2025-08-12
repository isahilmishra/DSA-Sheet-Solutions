// User function template for C++

class Solution {
  public:
    string isKSortedArray(int arr[], int n, int k) {
        // code here.
          vector<pair<int,int>>pq;
          for(int i=0; i<n; i++){
              pq.push_back({arr[i], i});
          }
           
          sort(pq.begin(),pq.end());
          for(int i=0; i<pq.size(); i++){
              if(abs(pq[i].second-i)>k){
                  return "No";
              }
          }
          return "Yes";
    }
};