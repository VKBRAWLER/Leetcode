class Solution(object):
    def isPalindrome(self, x):
        x = str(x)
        i = 0
        j = len(x)
        for i in range(j//2):  # Use integer division instead of division
            if x[i] != x[j - 1 - i]:
                return False
        return True
Solution = Solution()
print(Solution.isPalindrome(12321))
print(Solution.isPalindrome(123321))
print(Solution.isPalindrome(123421))    