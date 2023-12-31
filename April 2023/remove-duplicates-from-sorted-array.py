class Solution(object):
    def removeDuplicates(self, nums):
        j = 1
        for i in range(1,len(nums)):
            if nums[i] != nums[i-1]:
                nums[j] = nums[i]
                j = j+1
        return j
Solution = Solution()
print(Solution.removeDuplicates([1,1,2]))
print(Solution.removeDuplicates([0,0,1,1,1,2,2,3,3,4]))