class Solution(object):
    def removeElement(self, nums, val):
        while val in nums:
            nums.remove(val)
        a = len(nums)
        return a
Solution = Solution()
print(Solution.removeElement([3,2,2,3],3))
print(Solution.removeElement([0,1,2,2,3,0,4,2],2))