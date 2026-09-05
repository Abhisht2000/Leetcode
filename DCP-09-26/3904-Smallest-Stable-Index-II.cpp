class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int>pre(n);
        pre[0]=nums[0];
        vector<int>post(n);
        post[n-1]=nums[n-1];
        int j=n-2;
        for(int i=1;i<n;i++){
            pre[i]=max(pre[i-1],nums[i]);
            post[j]=min(post[j+1],nums[j]);
            j--;
        }
        for(int i=0;i<n;i++){
            int t=pre[i]-post[i];
            if(t<=k){
                return i;
            }
        }
        return -1;
    }
};