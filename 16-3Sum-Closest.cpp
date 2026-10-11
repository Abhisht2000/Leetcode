class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int ans=0;
        int closest = INT_MAX;
        for (int k = 0; k < n-2; k++) {
            int i = k+1;
            int j = n - 1;
            while (i < j) {
                int sum = nums[i] + nums[j] + nums[k];
                int diff = target - sum;
                if(abs(diff)<closest){
                    closest=abs(diff);
                    ans=sum;
                }
                if (sum < target) {
                    i++;
                } else if(sum>target){
                    j--;
                }
                else{
                    return sum;
                }
            }
        }
        return (ans);
    }
};