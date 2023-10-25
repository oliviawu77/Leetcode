/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
typedef struct ListNode Node;

int getDecimalValue(Node* head){
    Node* cur;
    Node* pre;
    Node* tail;
    int count = 0;
    int dec_value = 0;
    
    cur = head;

    tail = cur->next;
    cur->next = NULL;
    pre = cur;
    cur = tail;

    while(tail){
        tail = tail->next;
        cur->next = pre;
        pre = cur;
        cur = tail;
    }
    cur = pre;
    while(cur){
        dec_value += cur->val * pow(2, count);
        count++;
        cur = cur->next;
    }
    return dec_value;
}