class Solution(object):
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        new_dict={}
        for i in range(len(nums)):
            diff = target - nums[i]
            if diff in new_dict:
                return[i,new_dict[diff]]
            else:
                new_dict[nums[i]]=i