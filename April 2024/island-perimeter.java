class Solution {
  public int islandPerimeter(int[][] grid) {
    int rows = grid.length;
    int cols = grid[0].length;
    int perimeter = 0;

    for (int r = 0; r < rows; r++) {
      for (int c = 0; c < cols; c++) {
        if (grid[r][c] == 1) {
          perimeter += dfs(grid, r, c);
        }
      }
    }

    return perimeter;
  }

  private int dfs(int[][] grid, int r, int c) {
    // Base cases for DFS recursion
    if (r < 0 || r >= grid.length || c < 0 || c >= grid[0].length || grid[r][c] == 0) {
      return 1; // Water contributes 1 to perimeter
    }
    if (grid[r][c] == -1) {
      return 0; // Already visited land cell
    }

    // Mark cell as visited
    grid[r][c] = -1;

    // Explore neighbors (up, down, left, right)
    return (dfs(grid, r + 1, c) +
        dfs(grid, r - 1, c) +
        dfs(grid, r, c + 1) +
        dfs(grid, r, c - 1));
  }
}

public class leetcode {
  public static void main(String[] args) {
    Solution s = new Solution();
    int[][] grid = new int[][] { { 0, 1, 0, 0 }, { 1, 1, 1, 0 }, { 0, 1, 0, 0 }, { 1, 1, 0, 0 } };
    System.err.println(s.islandPerimeter(grid));
    grid = new int[][] { { 1 } };
    System.err.println(s.islandPerimeter(grid));
    grid = new int[][] { { 1, 0 } };
    System.err.println(s.islandPerimeter(grid));
    grid = new int[][] { { 0, 1 } };
    System.err.println(s.islandPerimeter(grid));
  }
}