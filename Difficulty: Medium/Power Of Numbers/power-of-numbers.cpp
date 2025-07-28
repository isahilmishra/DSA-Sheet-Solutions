class Solution {
  public:
    int reverseNumber(int n) {
    int rev = 0;
    while (n > 0) {
        rev = rev * 10 + (n % 10);
        n /= 10;
    }
    return rev;
}
    int reverseExponentiation(int N) {
        // code here
    int R=reverseNumber(N);
    int mod = 1e9 + 7;
    long long ans = 1;
    long long base = N;

    while (R > 0) {
        if (R % 2 == 1) {
            ans = (ans * base) % mod;
            R = R - 1;
        } else {
            base = (base * base) % mod;
            R = R / 2;
        }
    }

    return ans;
    }
};