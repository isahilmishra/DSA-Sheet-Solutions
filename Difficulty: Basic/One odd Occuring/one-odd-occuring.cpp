class Solution {
  public:
    int getOddOccurrence(vector<int>& arr) {
        // code here
         int XOR=0;
    for(int i=0; i<arr.size(); i++){
        XOR=XOR^arr[i];
    }
    return XOR;
    }
};