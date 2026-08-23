class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int>freq;
        for(int x:nums){
            freq[x]++;
        }
        vector<int>ans;
        for(auto i:freq){
            if(i.second>nums.size()/3){
                ans.push_back(i.first);
            }
        }
        return ans;
    }
};