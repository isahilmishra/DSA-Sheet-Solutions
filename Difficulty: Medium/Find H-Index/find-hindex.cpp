class Solution {
  public:
    int hIndex(vector<int>& a) {
        // code here
        int n = a.size();
        sort(a.begin(), a.end(), greater<int>()); // sort in descending order
        
        int h = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] >= i+1) { 
                h = i+1;
            } else {
                break;
            }
        }
        return h;
    }
};