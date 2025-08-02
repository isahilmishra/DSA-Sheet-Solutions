// User function Template for C++

class Solution {
  public:

    vector<int> count_NGE(int n, vector<int> &arr, int queries, vector<int> &indices) {
        // write your code here
  vector<int> ans;
  for (int i = 0; i < queries; i++) {
    int temp = 0;
    int qi = indices[i];
    for (int j = qi; j < n; j++) {
      if (arr[j] > arr[qi]) {
        temp++;
      }
    }
    ans.push_back(temp);
  }
  return ans;
    }
};