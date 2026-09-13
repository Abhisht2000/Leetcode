class Solution {
public:
    int countPrimes(int n) {
        
        
        if(n<3) return 0;
        vector<int>dp(n,0);
        //if(n==3) return dp[2]=1;
        for(int i=2;i<n;i++){
            bool t=false;
            for(int j=2;j<i;j++){
                if(i%j==0){
                    t=true;
                    break;
                }
            }
            if(t){
                dp[i]=dp[i-1];
            }
            else{
                dp[i]=dp[i-1]+1;
            }
        }
        return dp[n-1];
    }
};