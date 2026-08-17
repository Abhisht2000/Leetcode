class Solution {
public:

    int ways(int n, vector<int>& memo) {
        if(n <= 2)
            return n;

        if(memo[n] != -1)
            return memo[n];

        memo[n] = ways(n - 1, memo) + ways(n - 2, memo);

        return memo[n];
    }

    int climbStairs(int n) {
        vector<int> memo(n + 1, -1);

        return ways(n, memo);
    }
};