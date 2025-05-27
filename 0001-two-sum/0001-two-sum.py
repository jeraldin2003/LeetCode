class Solution(object):
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        unique = {}
        for i in range (0,len(nums)):
            unique[nums[i]] = i

        for i in range(0,len(nums)):
            if target-nums[i] in unique and i!= unique[target-nums[i]]:
                return i, unique[target-nums[i]]
        



        #BruteForce
        '''l = len(nums)
        print(l)
        for i in range(0,l):
            for j in range(i+1,l):
                if nums[i] + nums[j] == target:
                    return i,j '''

