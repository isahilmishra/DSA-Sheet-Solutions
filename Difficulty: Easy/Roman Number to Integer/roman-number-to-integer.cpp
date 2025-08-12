class Solution {
  public:
    int romanToDecimal(string &s) {
        // code here
     unordered_map<char, int> roman = {
        {'I', 1},   {'V', 5},   {'X', 10},
        {'L', 50},  {'C', 100}, {'D', 500},
        {'M', 1000}
    };

    int total = 0;
    int n = s.size();

    for (int i = 0; i < n; ++i) {
        int value = roman[s[i]];
        // If the next numeral is larger, subtract this one
        if (i + 1 < n && roman[s[i]] < roman[s[i + 1]]) {
            total -= value;
        } else {
            total += value;
        }
    }

    return total;
    }
};