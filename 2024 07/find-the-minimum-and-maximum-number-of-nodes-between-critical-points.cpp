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
  vector<int> nodesBetweenCriticalPoints(ListNode* head) {
    ListNode* p = head->next;
    if (p->next == NULL) return {-1, -1};
    int prevVal = head->val;
    bool big = prevVal < p->val;
    bool small = prevVal > p->val;
    prevVal = p->val;
    p = p->next;
    int lastCritical = -1;
    while (p != NULL) {
      if (prevVal > p->val) {
        if (big) lastCritical = 0;
        small = true; big = false;
      }
      else if (prevVal < p->val) {
        if (small) lastCritical = 0;
        big = true; small = false;
      }
      else { big = false; small = false; }
      prevVal = p->val;
      p = p->next;
      if (lastCritical == 0) break;
    }
    if (p == NULL) return {-1, -1};
    int MinDis = INT_MAX;
    int i = 1;
    for (int i = 1; p != NULL; prevVal = p->val, p = p->next, i++) {
      if (prevVal > p->val) {
        if (big) { MinDis = min(MinDis, i - lastCritical); lastCritical = i; }
        small = true; big = false;
      }
      else if (prevVal < p->val) {
        if (small) { MinDis = min(MinDis, i - lastCritical); lastCritical = i; }
        big = true; small = false;
      }
      else { big = false; small = false; }
    }
    if (MinDis == INT_MAX) return {-1, -1};
    return {MinDis, lastCritical};
  }
};
int main() {
  Solution s;
  ListNode *head = NULL;
  vector<int> nums = {10,4,4,1,3,6,2,6,10};
  for (int num : nums) {
    ListNode* newNode = new ListNode(num);
    if (head == NULL) { head = newNode; }
    else { ListNode* curr = head; while (curr->next != NULL) { curr = curr->next; }
    curr->next = newNode;
    }
  }
  vector<int> ans = s.nodesBetweenCriticalPoints(head);
  cout << ans[0] << " " << ans[1];
}