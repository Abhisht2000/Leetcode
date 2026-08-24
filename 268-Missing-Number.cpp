class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int t=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]^i){
                t++;
                return i;
            }
        }
        if(!t) return nums.size();
      return 0;
    }
};