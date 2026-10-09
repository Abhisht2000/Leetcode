class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size() - 2; i++) {
            if (i > 0 && nums[i] == nums[i - 1]  ) {
                continue;
            }
            int left = i + 1;
            int right = nums.size() - 1;

            while (left < right) {

                //&& i!=j && i!=k && j!=k
                vector<int> res(3);
                res[0] = nums[i];
                res[1] = nums[left];
                res[2] = nums[right];
                int sum = nums[i] + nums[left] + nums[right];

                if (sum == 0) {
                    ans.push_back(res);
                    left++;
                    right--;
                    while (left < right && nums[left] == nums[left - 1])
                        left++;

                    while (left < right && nums[right] == nums[right + 1])
                        right--;
                } else if (sum < 0) {
                    left++;
                } else {
                    right--;
                }
            }
        }

        return ans;
    }
};