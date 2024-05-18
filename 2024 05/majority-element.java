class Solution {
  public int majorityElement(int[] nums) {
      int n = nums.length;
      if (n < 3) return nums[0];
      Arrays.sort(nums);
      if (n%2 == 1) return nums[(int)n/2];
      return (nums[0] == nums[(int)n/2] ? nums[0] : nums[((int)(n/2)+1)]);
  }
}