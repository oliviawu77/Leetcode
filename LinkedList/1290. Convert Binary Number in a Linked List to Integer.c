/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
typedef struct ListNode Node;

int getDecimalValue(Node* head){
    Node* cur = head;

    int dec_value = 0;
    
    while(cur){
        dec_value = dec_value * 2 + cur->val;
        cur = cur->next;
    }
    return dec_value;
}