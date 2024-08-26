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
  ListNode* deleteMiddle(ListNode* head) {
    if (!head || !head->next) return NULL;
    ListNode *del = head, *trav = head->next;
    while (trav->next && trav->next->next) { trav = trav->next->next; del = del->next; }
    del->next = del->next->next;
    return head;
  }
};