class Solution {
  public:
    bool isSorted(vector<int>& arr) {
        // code here
        bool flag=true;
        for(int i=1;i<arr.size(); i++){
            if(arr[i]>=arr[i-1]){
                
            }
            else{
                flag=false;
                break;
            }
        }
        if(!flag) return false;
        else return true;
    }
};