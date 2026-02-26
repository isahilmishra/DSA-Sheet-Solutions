class Solution {
public:
  #define ll long long
    int numSteps(string s) {

        int steps = 0;

        while (s != "1") {
            int n = s.size();

            if (s[n - 1] == '0') {
                // even → divide by 2
                s.pop_back();
            } else {
                // odd → add 1
                int i = n - 1;
                while (i >= 0 && s[i] == '1') {
                    s[i] = '0';
                    i--;
                }
                if (i >= 0) s[i] = '1';
                else s = '1' + s; // carry overflow
            }
            steps++;
    }
      return steps;
    }
};