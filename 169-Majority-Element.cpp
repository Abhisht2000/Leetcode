class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int x:nums){
            mp[x]++;
        }
        for(auto i:mp){
            if(i.second>nums.size()/2){
                return i.first;
            }
        }
        return 0;
    }
};