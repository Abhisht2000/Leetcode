class Solution {
public:
    int dominantIndex(vector<int>& nums) {
       int largest=nums[0];
       int sLargest=INT_MIN;
       int i1=0;
       int i2=-1;
       for(int i=0;i<nums.size();i++){
        if(nums[i]>largest){
            i2=i1;
            i1=i;
            sLargest=largest;
            largest=nums[i];
        }
        else if(nums[i]<largest && sLargest<nums[i]){
            i2=i;
            sLargest=nums[i];
        }
        
       }
       if(largest>=2*sLargest){
        return i1;
       }
       else{
        return -1;
       }

    }
};