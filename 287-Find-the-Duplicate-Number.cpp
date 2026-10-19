class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int l=0;
        int r=nums.size()-1;
        while(l<=r){
            int count=0;
            int mid=l+((r-l)/2);
            for(int x:nums){
                if(x<=mid){
                    count++;
                }
            }
            if(count>mid){
                r=mid-1;

            }
            else{
                l=mid+1;
            }
        }
        return l;
    }
};