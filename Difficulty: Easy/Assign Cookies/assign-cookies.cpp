class Solution {
  public:
    int maxChildren(vector<int> &g, vector<int> &s) {
        // Your Code goes here.
        int n=g.size(),m=s.size();
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int l=0,r=0;
        while(l<m && r<n){
            if(g[r]<=s[l])r++;
            l++;
        }
        return r;
    }
};