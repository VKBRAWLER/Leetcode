struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
#include<iostream>
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if (head == NULL || head->next == NULL) return head;
        ListNode* prev = head;
        ListNode* node = head->next;
        while (node != NULL) {
            if (node->val != prev->val) {
                prev->next = node;
                prev = node;
            }
            node = node->next;
        }
        prev->next = NULL;
        return head;
    }
};