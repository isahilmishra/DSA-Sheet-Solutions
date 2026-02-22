class Solution {
public:
     bool isDigitorialPermutation(int n) {
         vector<int> digits;
        int temp = n;

        while (temp > 0) {
            digits.push_back(temp % 10);
            temp /= 10;
        }

        sort(digits.begin(), digits.end());

        // precompute factorials
        vector<long long> fact(10, 1);
        for (int i = 1; i <= 9; i++)
            fact[i] = fact[i - 1] * i;

        do {
            // permutation must not start with 0
            if (digits[0] == 0) continue;

            long long num = 0, sum = 0;
            for (int d : digits) {
                num = num * 10 + d;
                sum += fact[d];
            }

            if (num == sum)
                return true;

        } while (next_permutation(digits.begin(), digits.end()));

        return false;
    }
};