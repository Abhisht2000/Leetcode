class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int xorAll = 0;

        for (int num : nums) {
            xorAll ^= num;
        }

        unsigned int bit = (unsigned int)xorAll & (-(unsigned int)xorAll);

        int a = 0, b = 0;

        for (int num : nums) {
            if ((unsigned int)num & bit)
                a ^= num;
            else
                b ^= num;
        }

        return {a, b};
    }
};