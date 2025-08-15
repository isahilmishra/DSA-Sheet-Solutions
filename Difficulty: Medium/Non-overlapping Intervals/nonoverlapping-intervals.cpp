class Solution {
  public:
    int minRemoval(vector<vector<int>> &intervals) {
        // code here
         //sort on the vbasis of second value
        sort(intervals.begin(), intervals.end(), [](vector<int> &a, vector<int> &b){
            return a[1] < b[1];
        });
        int count=0;
        int ending=-1;
        for (int i=0; i< intervals.size(); i++){
            if(intervals[i][0]>= ending){
                ending= intervals[i][1];
            }
            else{
                count++;
            }
        }
        return count;
    }
};
