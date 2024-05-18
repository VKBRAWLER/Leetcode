class Solution {
  public int tribonacci(int n) {
    if (n == 0) return 0;
    if (n == 1 || n == 2) return 1;
    int[] arr = new int[n+1];
    arr[0] = 0;
    arr[1] = 1;
    arr[2] = 1;
    int i = 3;
    while (i < n+1) {
      arr[i] = arr[i-1] + arr[i-2] + arr[i-3];
      i++;
    }
    return arr[i-1];
  }
}