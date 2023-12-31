class Solution(object):
    def longestCommonPrefix(self, strs):
        check = (strs[0])
        ans = ""
        for i in range(len(strs)):
            strs[i] = strs[i] + ('0'*len(check))
        for i in range(len(check)):
            for item in strs:
                if item[i] != check[i]:
                    return ans
            ans = ans + item[i]
        return ans
Solution = Solution()
print(Solution.longestCommonPrefix(["flower","flow","flight"]))
print(Solution.longestCommonPrefix(["dog","racecar","car"]))