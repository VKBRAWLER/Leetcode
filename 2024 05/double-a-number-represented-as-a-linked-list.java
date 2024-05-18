public class ListNode {
    int val;
    ListNode next;
    ListNode() {}
    ListNode(int val) { this.val = val; }
    ListNode(int val, ListNode next) { this.val = val; this.next = next; }
}

class Solution {
  int carry = 0;
  public ListNode traverse(ListNode head) {
    if (head.next != null) traverse(head.next);
    head.val = head.val*2+carry;
    if (head.val > 9) {
      head.val -= 10;
      carry = 1;
    }
    else carry = 0;
  }
  public ListNode doubleIt(ListNode head) {
    carry = 0;
    traverse(head);
    if (carry) return new ListNode(1, head);
    else return head;
  }
}
class double {
  public static void main (String[] args) {
    Solution s = new Solution();
    ListNode head = new ListNode(1, new ListNode(8, new ListNode(9)));
    head = s.doubleIt(head);
    while (head != null) { System.out.println(head.val + " "); } System.out.println();
    head = new ListNode(9, new ListNode(9, new ListNode(9)));
    head = s.doubleIt(head);
    while (head != null) { System.out.println(head.val + " "); } System.out.println();
  }
}