class Solution {
public:
    int countPrimes(int n) {
        if(n<3) return 0;
        vector<bool>dp(n,true);
        dp[0]=dp[1]=false;
        for(int i=4;i<n;i+=2){
            dp[i]=false;
        }
        for(int i=3;i*i<n;i+=2){
            if(dp[i]){
                for( int j=i*i;j<n;j+=i*2){
                    dp[j]=false;
                }
            }
        }
        int ans=1;
        for(int i=3;i<n;i++){
            if(dp[i]){
                ans+=1;
            }
        }
      //  return count(dp.begin(),dp.end(),true);
      return ans;
    }
};