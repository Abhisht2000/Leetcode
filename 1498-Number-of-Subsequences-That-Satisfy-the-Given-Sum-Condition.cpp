class Solution {
public:
    int numSubseq(vector<int>& nums, int target) {
        int n=nums.size();
        long long count=0;
        sort(nums.begin(),nums.end());
        int j=n-1;
        int i=0;
        vector<long long>power(n);
        power[0]=1;
        for(int i=1;i<n;i++){
            power[i]=(2*power[i-1])%1000000007;
        }
        while(i<=j){
            if(nums[i]+nums[j]<=target){
                count=(count+(power[j-i]))%1000000007;
                i++;
            }

            else{
                j--;
            }
        }
        return count;
    }
};