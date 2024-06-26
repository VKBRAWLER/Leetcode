class Solution {
  public boolean searchMatrix(int[][] matrix, int target) {
      int m = matrix.length, n = matrix[0].length, i = m-1, j = 0;
      while (i >= 0 && j < n) {
          if (matrix[i][j] == target) return true;
          else if (matrix[i][j] < target) j++;
          else if (matrix[i][j] > target) i--;
      }
      return false;
  }
}