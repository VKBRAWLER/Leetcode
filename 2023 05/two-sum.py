class Solution(object):
    def twoSum(self, nums, target):
        l = len(nums)
        for i in range(l):
            for j in range(i+1,l):
                if nums[i] + nums[j] == target:
                    return [i,j]
Solution = Solution()
print(Solution.twoSum([2,7,11,15],9))
print(Solution.twoSum([3,2,4],6))
print(Solution.twoSum([3,3],6))