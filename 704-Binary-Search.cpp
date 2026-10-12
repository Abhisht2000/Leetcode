class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int t=target;
        int l=0;
        int r=n-1;
        while(l<=r){
            int mid=l+((r-l)/2);
            if(t<nums[mid]){
                r=mid-1;
            }
            else if(t>nums[mid]){
                l=mid+1;
            }
            else{
                return mid;
            }
        }
        return -1;
    }
};