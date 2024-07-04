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
  ListNode* mergeNodes(ListNode* head) {
    ListNode * NZ = new ListNode(0, head);
    int sum = 0;
    ListNode * i = head->next;
    while (i != NULL) {
      if (i->val == 0 && sum) {
        NZ = NZ->next;
        NZ->val = sum;
        sum = 0;
      }
      else sum += i->val;
      i = i->next;
    }
    NZ->next = NULL;
    return head;
  }
};
int main() {
  
}