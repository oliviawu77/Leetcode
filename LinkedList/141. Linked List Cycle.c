/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
typedef struct ListNode Node;

bool hasCycle(Node *head) {
    Node* slow = head;
    Node* fast = head;

    if(head == NULL){
        return 0;
    }

    while(fast->next != NULL){
        fast = fast->next->next;
        if(!fast){
            return 0;
        }
        slow = slow->next;
        if(fast == slow){
            return 1;
        }
    }

    return 0;
}
