import java.util.Stack;
class Solution {
  public boolean checkValidString(String s) {
    Stack<Integer> start = new Stack<>();
    Stack<Integer> paren = new Stack<>();
    for (int i = 0; i < s.length(); i++) {
      if (s.charAt(i) == '(') start.push(i);
      else if (s.charAt(i) == ')') {
        if (start.empty() == false) start.pop();
        else if (paren.empty() == false) paren.pop();
        else return false;
      }
      else paren.push(i);
    }
    if (start.size() > paren.size()) return false;
    while (start.empty() == false) {
      if (start.peek() > paren.peek()) return false;
      start.pop();
      paren.pop();
    }
    return true;
  }
}
class valid {
  public static void main(String[] args) {
    Solution s = new Solution();
    System.out.println(s.checkValidString("()"));
    System.out.println(s.checkValidString("(*)"));
    System.out.println(s.checkValidString("(*))"));
  }
}
