class Solution {
public:
    vector<int> solveQueries(vector<int>& nums, vector<int>& queries) {
        int m=queries.size();
        vector<int>ans(m,-1);
        int n=nums.size();
        
        for(int i=0;i<queries.size();i++){
            int final=-1;
            for(int j=0;j<n;j++){
                if(nums[j]==nums[queries[i]] && j!=queries[i]){
                    int res=min((queries[i]-j +n)%n, (j-queries[i]+n)%n);
                    if(ans[i]== -1){
                        ans[i]=res;
                    }
                    else{
                        ans[i]=min(ans[i],res);
                    }
                }
            }
        }
        return ans;

    }
};