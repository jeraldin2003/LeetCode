class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        left = [1]*len(nums)
        right = [1]*len(nums)
        leftr = 1
        rightr = 1 
        for i in range(0,len(nums)):
            left[i] = leftr
            leftr = nums[i]*leftr
        for j in range(len(nums)-1,-1,-1):
            right[j] = rightr
            rightr = rightr*nums[j]
        for i in range(len(nums)):
            nums[i] = right[i]*left[i]
        return nums