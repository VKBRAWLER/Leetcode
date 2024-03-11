class Solution {
  public int countGoodSubstrings(String s) {
    if (s.length() == 1) return 1;
    int max = 0;
    for (int i = 0; i < s.length() - 2; i++) {
      if (s.charAt(i) == s.charAt(i+1)) continue;
      else if (s.charAt(i+1) == s.charAt(i+2) || s.charAt(i) == s.charAt(i+2)) continue;
      else max++;
    }
    return max;
  }
}
class substrings {
  public static void main(String[] args) {
    Solution S = new Solution();
    String s = "xyzzaz";
    System.out.println(S.countGoodSubstrings(s));
    s = "aababcabc";
    System.out.println(S.countGoodSubstrings(s));
  }
}
