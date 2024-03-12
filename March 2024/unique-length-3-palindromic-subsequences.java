import java.util.HashSet;
import java.util.Set;
class Solution {
  public int countPalindromicSubsequence(String s) {
    Set<String> SET = new HashSet<>();
    int[] alpha = new int[26];
    int n = s.toCharArray().length;
    for (int i = 0; i < n - 2; i++) {
      if (alpha[s.charAt(i) - 97] == 1) continue;
      char MainChar = s.charAt(i);
      // System.out.println(MainChar);
      alpha[MainChar - 97] = 1;
      int end = n-1;
      for (;end > i; end--) {
        if (s.charAt(end) == MainChar) {
          for (end = end-1; end > i; end--) {
            SET.add(String.valueOf(MainChar)+String.valueOf(s.charAt(end))+String.valueOf(MainChar));
          }
          break;
        }
      }
    }
    return SET.size();
  }
}
class unique {
  public static void main(String[] args) {
  Solution s = new Solution();
  System.out.println(s.countPalindromicSubsequence("aabca"));
  System.out.println(s.countPalindromicSubsequence("adc"));
  System.out.println(s.countPalindromicSubsequence("bbcbaba"));
  System.out.println(s.countPalindromicSubsequence("tlpjzdmtwderpkpmgoyrcxttiheassztncqvnfjeyxxp"));
  }
}
