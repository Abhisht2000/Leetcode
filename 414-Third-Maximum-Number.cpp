class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long long largest=nums[0];
        long long sLargest=LLONG_MIN;
        long long tLargest=LLONG_MIN;
        int c=0;
        for(int i=1;i<nums.size();i++){
            if(nums[i]==largest || nums[i]==sLargest || nums[i]==tLargest)
            continue;
            c++;
            if(largest<nums[i]){
                tLargest=sLargest;
                sLargest=largest;
                largest=nums[i];
            }
            else if(largest>nums[i] && sLargest<nums[i]){
                tLargest=sLargest;
                sLargest=nums[i];
            }
            else if(largest>nums[i] && sLargest>nums[i] && tLargest<nums[i]){
                tLargest=nums[i];
            }
        }
        if(c+1<3){
            return largest;
        }
        else{
            return tLargest;
        }
    }
    
};