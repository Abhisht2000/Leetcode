class Solution {
public:
    int solve(int n,vector<int>& nums, vector<int> & memo){
        if(n<0){
            return 0;
        }
        if(memo[n]!= -1){
            return memo[n];
        }
        int skip=solve(n-1,nums,memo);
        int take=solve(n-2,nums,memo)+nums[n];
        return memo[n]=max(take,skip);
    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int>memo(n,-1);
        return solve(n-1,nums,memo);
    }
};