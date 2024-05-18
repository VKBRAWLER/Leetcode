#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct ListNode {
    int val;
    ListNode *next  ;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
class Solution {
public:
    ListNode *prev = nullptr;
    ListNode* temp;
    int nn;
    int pos (ListNode * node) {
      if (node->next == nullptr) {
          return 1;
        }
      int nnn = pos(node->next);
      if (nnn == nn) {
        prev = node;
      }
      return 1 + nnn;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
      if (head->next == nullptr) return nullptr;
      temp = head;
      nn = n;
      if (pos(head) == n) {
        head = head->next;
      }
      else {
        prev->next = prev->next->next;
      }
      return head;
    }
};
int main() {
  Solution s;
  ListNode* head = new ListNode(1, new ListNode(2,new ListNode(3, new ListNode(4, new ListNode(5)))));
  for (ListNode* temp = s.removeNthFromEnd(head, 2); temp != NULL; temp = temp->next) { cout << temp->val << " "; } cout << endl;
}