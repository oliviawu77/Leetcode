/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
typedef struct ListNode Node;
void deleteNode(Node* node) {
    Node* cur = node->next;
    Node* pre = node;

    pre->val = cur->val;
    pre->next = cur->next;
}