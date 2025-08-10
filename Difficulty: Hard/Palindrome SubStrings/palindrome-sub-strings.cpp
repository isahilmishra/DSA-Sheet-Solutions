class Solution {
  public:
    int countPS(string &s) {
        // code here
       int n = s.size();
        int cnt = 0;

        // Odd length palindromes
        for (int center = 0; center < n; center++) {
            int l = center, r = center;
            while (l >= 0 && r < n && s[l] == s[r]) {
                if (r - l + 1 >= 2) cnt++;
                l--;
                r++;
            }
        }

        // Even length palindromes
        for (int center = 0; center < n - 1; center++) {
            int l = center, r = center + 1;
            while (l >= 0 && r < n && s[l] == s[r]) {
                if (r - l + 1 >= 2) cnt++;
                l--;
                r++;
            }
        }

        return cnt;
    }
};