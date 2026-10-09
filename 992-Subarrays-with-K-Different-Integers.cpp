
class Solution {
public:
    int atMost(vector<int>& nums, int k) {
        int n = nums.size();
        int left = 0;
        int distinct = 0;
        int count = 0;

        unordered_map<int, int> freq;

        for (int right = 0; right < n; right++) {
            freq[nums[right]]++;

            if (freq[nums[right]] == 1) {
                distinct++;
            }

            while (distinct > k) {
                freq[nums[left]]--;

                if (freq[nums[left]] == 0) {
                    distinct--;
                }

                left++;
            }

            count += right - left + 1;
        }

        return count;
    }

    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return atMost(nums, k) - atMost(nums, k - 1);
    }
};

