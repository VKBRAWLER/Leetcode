class ListNode {
  int val;
  ListNode next;
  ListNode() {}
  ListNode(int val) { this.val = val; this.next = null; }
  ListNode(int val, ListNode next) { this.val = val; this.next = next; }
}
class Solution {
int carry = 0;
public void sumVal (ListNode prev) {
  ListNode l = prev.next;
  while (carry != 0 && l != null) {
    l.val += carry;
    if (l.val >= 10) { carry = 1; l.val -= 10; }
    else carry = 0;
    prev = l;
    l = l.next;
  }
  if (carry > 0) prev.next = new ListNode(carry);
}
public ListNode addTwoNumbers(ListNode l1, ListNode l2) {
  ListNode l3 = new ListNode(l1.val + l2.val + carry);
  if (l3.val >= 10) { carry = 1; l3.val -= 10; }
  else carry = 0;
  if (l1.next != null && l2.next != null) l3.next = addTwoNumbers(l1.next, l2.next);
  else if (l2.next == null) { l3.next = l1.next; sumVal(l3);}
  else if (l1.next == null) { l3.next = l2.next; sumVal(l3);}
  else if (carry == 1) l3.next = new ListNode(1);
  return l3;
  }
}
class add {
public static void main(String[] args) {
  Solution s1 = new Solution();
  Solution s2 = new Solution();
  Solution s3 = new Solution();
  Solution s4 = new Solution();
  ListNode l1 = new ListNode(2, new ListNode(4, new ListNode(3)));
  ListNode l2 = new ListNode(5, new ListNode(6, new ListNode(4)));
  ListNode l3 = s1.addTwoNumbers(l1, l2);
  while (l3 != null) { System.out.print(l3.val + " "); l3 = l3.next; } System.err.println();
  l1 = new ListNode(9, new ListNode(9, new ListNode(9, new ListNode(9, new ListNode(9, new ListNode(9, new ListNode(9)))))));
  l2 = new ListNode(9, new ListNode(9, new ListNode(9, new ListNode(9))));
  l3 = s2.addTwoNumbers(l1, l2);
  while (l3 != null) { System.out.print(l3.val + " "); l3 = l3.next; } System.err.println();
  l1 = new ListNode(0);
  l2 = new ListNode(0);
  l3 = s3.addTwoNumbers(l1, l2);
  while (l3 != null) { System.out.print(l3.val + " "); l3 = l3.next; } System.err.println();
  l1 = new ListNode(9, new ListNode(9, new ListNode(1)));
  l2 = new ListNode(1);
  l3 = s4.addTwoNumbers(l1, l2);
  while (l3 != null) { System.out.print(l3.val + " "); l3 = l3.next; } System.err.println();
  }
}