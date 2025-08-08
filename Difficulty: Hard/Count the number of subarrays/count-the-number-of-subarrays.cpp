// User function Template for C++
class Solution {
  public:
    long long countAtMost(vector<int>& A, long long K){
        // code here
       if (K < 0) return 0;

        long long count = 0;
        long long sum = 0;
        int l = 0;

        for (int r = 0; r < A.size(); ++r) {
            sum += A[r];

            while (sum > K && l <= r) {
                sum -= A[l];
                l++;
            }

            // All subarrays ending at r and starting from l to r are valid
            count += (r - l + 1);
        }
        return count;
    }
     long long countSubarray(int N, vector<int> A, long long L, long long R) {
        return countAtMost(A, R) - countAtMost(A, L - 1);
    }
};