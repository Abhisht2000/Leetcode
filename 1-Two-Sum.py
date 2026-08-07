class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        di={}
        for i in range(0,len(nums)):
            rem=target-nums[i]
            if rem in di:
                return [di[rem],i]
            di[nums[i]]=i