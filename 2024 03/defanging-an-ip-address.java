class Solution {
  public String defangIPaddr(String address) {
    StringBuilder newAdd = new StringBuilder();
    for (char c: address.toCharArray()) {
      if (c == '.') newAdd.append("[.]");
      else newAdd.append(c);
    }
    return newAdd.toString();
  }
}
class defanging {
  public static void main (String[] args) {
    Solution s = new Solution();
    String address = "1.1.1.1";
    System.out.println(s.defangIPaddr(address));
    address = "255.100.50.0";
    System.out.println(s.defangIPaddr(address));

  }  
}
