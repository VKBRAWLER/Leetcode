class Solution(object):
    def checkXMatrix(self, grid):
        n = len(grid)
        for i in range(n):
              for j in range(n):
                    if i == j or i+j == n-1:
                          if grid[i][j] == 0:
                                return False
                    else:
                          if grid[i][j] != 0:
                                return False
        return True
Solution = Solution()
print(Solution.checkXMatrix([[2,0,0,1],[0,3,1,0],[0,5,2,0],[4,0,0,2]]))
print(Solution.checkXMatrix([[5,7,0],[0,3,1],[0,5,0]]))
