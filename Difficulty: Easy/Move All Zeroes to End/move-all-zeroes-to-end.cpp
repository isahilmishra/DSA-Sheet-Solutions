class Solution {
  public:
    void pushZerosToEnd(vector<int>& a) {
        // code here
        int n=a.size();
         if(n==1){
        
    }
    int j=-1;
    for(int i=0; i<n; i++){
        if(a[i]==0) {
            j=i;
            break;
        }
    }
    if(j==-1){
        
    }
    else{
    for(int i=j+1; i<n; i++){
        if(a[i]!=0){
         swap(a[i],a[j]);
        j++; 
      }
    }
    }
    }
};