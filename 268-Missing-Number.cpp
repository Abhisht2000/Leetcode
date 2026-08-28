class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int mis=nums.size();
        for(int i=0;i<nums.size();i++){
            mis^=nums[i];
            mis^=i;
        }
        return mis;
    }
};