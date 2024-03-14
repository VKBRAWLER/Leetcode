import java.util.ArrayList;
class Solution {
  public int numSubarraysWithSum(int[] nums, int goal) {
    int  result = 0, n = nums.length;
    if (goal == 0) {
      int c = 0;
      for (int i = 0; i < n; i++) {
        if (nums[i] == 1) { if (c > 0) {result += (c*(c+1))/2; c = 0;} }
        else c++;
      }
      if (c > 0) result += (c*(c+1))/2;
      return result;
    }
    ArrayList<Integer> list = new ArrayList<>();
    for (int i = 0; i < n; i++) { if (nums[i] == 1) list.add(i); }
    int m = list.size();
    if (m < goal) return 0;
    for (int i = 0, s0 = -1; i < m; i++) {
      s0 = list.get(i)-s0;
      int e1 = i + goal - 1;
      if (e1 >= m) break;
      int e0 = (e1 == m-1? n-list.get(e1): list.get(e1+1) - list.get(e1));
      result += s0*e0;
      s0 = list.get(i);
    }
    return result;
  }
}

class binary {
  public static void main (String[] args) {
    Solution s = new Solution();
    int[] nums = {1,0,1,0,1}; // [0, 2, 4]
    System.err.println(s.numSubarraysWithSum(nums, 2));
    nums = new int[] {0,0,0,0,0};
    System.err.println(s.numSubarraysWithSum(nums, 0));
    nums = new int[] {1,0,0,0,0,0,0,0,1,0,0,1,0,0,0,0,0,0,0,0}; // [1, 2, 3, 4] // 0111 111 111
    System.err.println(s.numSubarraysWithSum(nums, 0));
  }
}