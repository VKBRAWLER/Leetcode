#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
      ListNode *fast = head, *slow = head;
      while(fast->next) {
        if (!fast->next->next) return slow->next;
        fast = fast->next->next;
        slow = slow->next;
      }
      return slow;

    }
};
int main() {
  Solution s;
  ListNode *head = new ListNode(1, new ListNode(2, new ListNode(3, new ListNode (4, new ListNode (5)))));
  cout << s.middleNode(head)->val << endl;
  head = new ListNode(1, new ListNode(2, new ListNode(3, new ListNode (4, new ListNode (5, new ListNode(6))))));
  cout << s.middleNode(head)->val << endl;
  head = new ListNode(1, new ListNode(2));
  cout << s.middleNode(head)->val << endl;
  head = new ListNode(1);
  cout << s.middleNode(head)->val << endl;

}