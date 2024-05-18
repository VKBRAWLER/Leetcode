class Solution {
  public int[] replaceElements(int[] arr) {
      int i = arr.length-1, prev = arr[i];
      arr[i--] = -1;
      for (int max = prev; i >= 0; i--) {
          max = prev > max ? prev : max;
          prev = arr[i];
          arr[i] = max;
      }
      return arr;
  }
}