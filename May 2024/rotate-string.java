class Solution {
  public boolean rotateString(String s, String goal) {
    if (s.length() != goal.length()) return false;
    return (s + s).contains(goal);
  }
}
public rotate {
  public static void main(String[] args) {
    Solution S = new Solution();
    String s = "abcde", goal = "cdeab";
    System.err.println(S.rotateString(s, goal));
    s = "abcde";
    goal = "abced";
    System.err.println(S.rotateString(s, goal));
  }
}