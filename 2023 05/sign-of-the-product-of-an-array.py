class Solution(object):
    def arraySign(self, nums):
        a = 1
        for i in nums:
            a*=i
        if a<0:
            return -1
        if a==0:
            return 0
        return 1
Solution = Solution()
print(Solution.arraySign([-1,-2,-3,-4,3,2,1]))
print(Solution.arraySign([1,5,0,2,-3]))
print(Solution.arraySign([-1,1,-1,1,-1]))