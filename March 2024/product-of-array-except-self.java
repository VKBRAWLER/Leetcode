class Solution {
  public int[] productExceptSelf(int[] nums) {
    int n = nums.length, c = -1, total = 1;
    for (int i = 0; i < n; i++) {
      if (nums[i] == 0) {
        if (c == -1) c = i;
        else { return new int[n]; } 
      }
      else { total *= nums[i]; }
    }
    if (c != -1) {
      nums = new int[n];
      nums[c] = total;
      return nums;
    }
    for (int i = 0; i<n; i++) { nums[i] = total/nums[i]; }
    return nums;
  }
}
class product {
  public static void main(String[] args) {
    Solution s = new Solution();
    int[] nums = {1,2,3,4};
    for (int i: s.productExceptSelf(nums)) { System.err.print(i + " "); } System.err.println();
    nums =  new int[]{-1,1,0,-3,3};
    // for (int i: s.productExceptSelf(nums)) { System.err.print(i + " "); } System.err.println();
    nums =  new int[]{-1,1,0,-3,3,0};
    // for (int i: s.productExceptSelf(nums)) { System.err.print(i + " "); } System.err.println();
    
  }
}