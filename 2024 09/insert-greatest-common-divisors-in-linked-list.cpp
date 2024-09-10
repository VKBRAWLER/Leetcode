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
      ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode *p = head;
        while (p && p->next) {
          ListNode * q = new ListNode(__gcd(p->val, p->next->val), p->next);
          p->next = q;
          p = q->next;
        }
        return head;
      }
  };