class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum=nums[i]+sum;
        }
        if(sum%2!=0)
        return false;
        int ans=sum/2;
        vector<bool>dp(ans+1,false);
        dp[0]=true;
        for(auto x:nums){
            for(int j=ans;j>=x;j--){
                dp[j]=dp[j]||dp[j-x];
            }
        }
        return dp[ans];
    }
};
























