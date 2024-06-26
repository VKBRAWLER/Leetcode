class Solution {
  public String longestPalindrome(String s) {
    int n = s.length();
    boolean dp[][] = new boolean[n][n];
    int[] ans = new int[] {0, 0};
    for (int i = 0; i < n; i++) {
      dp[i][i] = true;
    }
    for (int i = 0; i < n-1; i++) {
      if (s.charAt(i) == s.charAt(i+1)) {
        dp[i][i+1] = true;
        ans[0] = i;
        ans[1] = i+1;
      }
    }
    for (int len = 2; len < n; len++) {
      for (int i = 0; i + len < n; i++) {
        int j = i+len;
        if (s.charAt(i) == s.charAt(j) && dp[i+1][j-1]) {
          dp[i][j] = true;
          ans[0] = i;
          ans[1] = j;
        }
      }
    }
    return s.substring(ans[0], ans[1]+1);
  }
}
public class longest {
  public static void main(String[] args) {
    Solution S = new Solution();
    System.err.println(S.longestPalindrome("babad"));
    System.err.println(S.longestPalindrome("cbbd"));
  }
}
