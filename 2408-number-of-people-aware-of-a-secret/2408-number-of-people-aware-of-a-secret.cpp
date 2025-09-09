class Solution {
public:
    int M = 1e9+7;
    vector<int> dp;  // memo table

    //This will return total no of people who know the secret on day "day"
    int solve(int day, int delay, int forget){
        if(day == 1) return 1;
        if(dp[day] != -1) return dp[day];

        long long res = 0;
        for(int prev = max(1, day - forget + 1); prev <= day - delay; prev++){
            res = (res + solve(prev, delay, forget)) % M;
        }
        return dp[day] = res;
    }
    int peopleAwareOfSecret(int n, int delay, int forget) {
        dp.assign(n+1, -1); // initialize memo
        long long total = 0;
        for(int day = n - forget + 1; day <= n; day++){
            total = (total + solve(day, delay, forget)) % M;
        }
        return total;
    }
};