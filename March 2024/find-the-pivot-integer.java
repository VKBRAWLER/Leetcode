class Solution {
  public int pivotInteger(int n) {
    if (n==1) return 1;
    int sum1 = 1, sum2 = n, i = 2, j = n-1;
    while (i < j) {
      if (sum2 >= sum1) sum1+= i++;
      else if (sum2 < sum1) sum2+= j--;
    }
    if (sum1 == sum2) return j; 
    else return -1;
  }
}
class find {
  public static void main (String[] args) {
    Solution s = new Solution();
    System.err.println(s.pivotInteger(8));
    System.err.println(s.pivotInteger(1));
    System.err.println(s.pivotInteger(4));
  }
}