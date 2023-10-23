/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
typedef struct ListNode Node;

Node* removeNthFromEnd(Node* head, int n){
    Node* cur = head;
    Node* pos_remove = NULL;
    //cur increment n steps at first
    for(int index = 0; index < n; index++){
        cur = cur->next;
    }
    //cur and pos_remove increment until cur reaches end
    if(cur){
        pos_remove = head;
        cur = cur->next;
    }
    while(cur){
        pos_remove = pos_remove->next;
        cur = cur->next;
    }
    //remove pos_remove
    if(pos_remove == NULL){
        head = head->next;
        return head;
    }
    if(pos_remove->next){
        pos_remove->next = pos_remove->next->next;
    }

    return head;
}