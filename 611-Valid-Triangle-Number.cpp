class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        int n=nums.size();
        int c=0;
        sort(nums.begin(),nums.end());
        for(int i=n-1;i>1;i--){
            int k=0;
            int j=i-1;

            while(k<j){
                if(nums[j]+nums[k]>nums[i]){
                    c=c+(j-k);
                   j--;
                }
                else{
                    k++;
                }
            }
        }
        return c;
    }
};