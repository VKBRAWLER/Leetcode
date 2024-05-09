class Solution {
  public long maximumHappinessSum(int[] happiness, int k) {
    if (k == 1) return Arrays.stream(happiness).max().getAsInt(); 
    Arrays.sort(happiness);
    int n = happiness.length - 1;
    for (int i = n-1; n-i < k; i--) {
      happiness[i] -= n-i;
    }
    long val = 0;
    for (int i = n; n-i < k; i--) {
      if (happiness[i] <= 0) break;
      val += happiness[i];
    }
    return val;
  }
}
public class maximize {
  public static void main(String[] args) {
    Solution s = new Solution();
    int[] happiness = new int[] {1,2,3};
    System.err.println(s.maximumHappinessSum(happiness, 2));
    happiness = new int[] {1,1,1,1};
    System.err.println(s.maximumHappinessSum(happiness, 2));
    happiness = new int[] {2,3,4,5};
    System.err.println(s.maximumHappinessSum(happiness, 1));
  }
}
