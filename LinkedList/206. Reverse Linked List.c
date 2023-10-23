/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
typedef struct ListNode Node;

Node* reverseList(Node* head){
    Node* tail = head;
    Node* current = NULL;
    Node* pre = NULL;

    if(tail==NULL){
        return NULL;
    }
    current = tail->next;
    pre = tail;
    pre->next = NULL;
    
    if(current->next != NULL){
        current = current->next;
        tail = current;
        tail->next = pre;
        pre = tail;
        printf("%d\n", current->val);
    }

    return tail;
}