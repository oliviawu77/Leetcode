/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
typedef struct ListNode Node;

Node* swapNodes(Node* head, int k){

    if(head->next == NULL){
        return head;
    }
    
    Node *cur, *node1, *node2;
    node1 = NULL;
    node2 = NULL;

    cur = head;
    int i = 0;
    for(i = 0; i < k-1; i++){
        cur = cur->next;
    }
    node1 = cur;

    cur = head;
    for(i = 0; i < k; i++){
        cur = cur->next;
    }
    node2 = head;
    while(cur){
        node2 = node2->next;
        cur = cur->next;
    }
    if(node1){
        printf("node1: %d\n", node1->val);
    }
    if(node2){
        printf("node2: %d\n", node2->val);
    }
    int tmp;
    
    tmp = node1->val;
    node1->val = node2->val;
    node2->val = tmp;

    return head;
}