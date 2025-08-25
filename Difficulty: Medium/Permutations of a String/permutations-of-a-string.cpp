class Solution {
  public:
    vector<string> findPermutation(string &s) {
        // Code here there
        sort(s.begin(),s.end());
        vector<string> ans;
        do{
            ans.push_back(s);
        }while(next_permutation(s.begin(),s.end()));
        return ans;
    }
};
