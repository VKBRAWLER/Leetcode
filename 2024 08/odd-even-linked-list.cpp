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
  ListNode* oddEvenList(ListNode* head) {
    if (!head || !head->next || !head->next->next) return head;
    ListNode *evenNode = head->next;
    head->next = head->next->next;
    ListNode *even = evenNode, *trav = head->next;
    while (trav && trav->next) {
      even->next = trav->next;
      even = even->next;
      trav->next = trav->next->next;
      if (trav->next) trav = trav->next;
    }
    even->next = NULL;
    trav->next = evenNode;
    return head;
  }
};