import java.util.Arrays;

class Solution {
  public int findMaxLength(int[] nums) {
    int[] arr = new int[2 * nums.length + 1];
    Arrays.fill(arr, -2);
    arr[nums.length] = -1;
    int maxlen = 0, count = 0;
    for (int i = 0; i < nums.length; i++) {
      count = count + (nums[i] == 0 ? -1 : 1);
      if (arr[count + nums.length] >= -1) {
        maxlen = Math.max(maxlen, i - arr[count + nums.length]);
      } else {
        arr[count + nums.length] = i;
      }
    }
    return maxlen;
  }
}

class product {
  public static void main(String[] args) {
    Solution s = new Solution();
    int[] nums = { 0, 1 };
    System.err.println(s.findMaxLength(nums));
    nums = new int[] { 0, 1, 0 };
    System.err.println(s.findMaxLength(nums));
    nums = new int[] { 0, 0, 1, 0, 0, 0, 1, 1 };
    System.err.println(s.findMaxLength(nums));
    nums = new int[] { 0, 1, 1, 0, 1, 1, 1, 0 };
    System.err.println(s.findMaxLength(nums));

  }
}