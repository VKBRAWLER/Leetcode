class Solution {
  int m, n;
  public void traceLand(char[][] grid, int i, int j) {
    if (grid[i][j] == '1') grid[i][j] = '0';
    else return;
    if (i > 0) traceLand(grid, i-1, j);
    if (i < m-1) traceLand(grid, i+1, j);
    if (j > 0) traceLand(grid, i, j-1);
    if (j < n-1) traceLand(grid, i, j+1);
  }
  public int numIslands(char[][] grid) {
  m = grid.length;
  n = grid[0].length;
  int island = 0;
    for (int i = 0; i < m; i++) {
      for (int j = 0; j < n; j++) {
        if (grid[i][j] == '1') { traceLand(grid,i,j); island++; }
        }
      }
  return island;
  }
}

class number {
  public static void main(String[] args) {
    Solution s = new Solution();
    char [][] grid = new char[][] { { '1','1','1','1','0'},{'1','1','0','1','0'},{'1','1','0','0','0'},{'0','0','0','0','0' } };
    System.err.println(s.numIslands(grid));
    grid = new char [][] { { '1','1','0','0','0'},{'1','1','0','0','0'},{'0','0','1','0','0'},{'0','0','0','1','1' } };
    System.err.println(s.numIslands(grid));
  }
}