class Solution {
  public boolean isIsomorphic(String s, String t) {
    int[] hash = new int[256];
    for (int i = 0; i < s.length(); i++) {
      char sChar = s.charAt(i);
      if (hash[sChar] == 1) continue;
      hash[sChar] = 1;
      char tChar = t.charAt(i);
      for (int j = i; j < s.length(); j++) {
        if (s.charAt(j) == sChar || t.charAt(j) == tChar) {
          if (s.charAt(j) == sChar && t.charAt(j) == tChar) continue;
          else return false;
        }
      }
    }
    return true;
  }
}
class isomorphic {
  public static void main(String[] args) {
    Solution s = new Solution();
    System.out.println(s.isIsomorphic("egg", "add"));
    System.out.println(s.isIsomorphic("foo", "bar"));
    System.out.println(s.isIsomorphic("paper", "title"));
  }
}