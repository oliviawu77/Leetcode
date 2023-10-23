/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
typedef struct ListNode Node;

Node* middleNode(Node* head){
    Node* cur;
    Node* mid;
    cur = head;
    mid = cur;
    int pos = 0;
    while(cur != NULL){
        if((pos % 2)){
            mid = mid->next;
        }
        pos++;
        cur = cur->next;
    }
    return mid;    
}