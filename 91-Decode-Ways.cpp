class Solution {
public:
    int solve(int n, string& s, vector<int>& memo) {
        if (n == 0)
            return 1;

        if (memo[n] != -1)
            return memo[n];

        int ways = 0;

        if (s[n - 1] != '0') {
            ways += solve(n - 1, s, memo);
        }

        if (n >= 2) {
            int num = (s[n - 2] - '0') * 10 + (s[n - 1] - '0');

            if (num >= 10 && num <= 26) {
                ways += solve(n - 2, s, memo);
            }
        }

        return memo[n] = ways;
    }

    int numDecodings(string s) {
        int n = s.size();

        vector<int> memo(n + 1, -1);

        return solve(n, s, memo);
    }
};