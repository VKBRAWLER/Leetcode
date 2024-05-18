class Solution(object):
    def isValid(self, s):
        for i in range(int(len(s)/2)):
            s = s.replace("()",'')
            s = s.replace("{}",'')
            s = s.replace("[]",'')
        if s == "":
            return True
        return False
Solution = Solution()
print(Solution.isValid("()"))
print(Solution.isValid("()[]{}"))
print(Solution.isValid("(]"))