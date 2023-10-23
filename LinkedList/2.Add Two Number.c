/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
 typedef struct ListNode Node;

Node* addTwoNumbers(Node* l1, Node* l2){
    Node* l3;
    
    l3 = (Node*)malloc(sizeof(Node));

    int v1, v2;
    int sum = 0;
    int carry = 0;
    

    sum = l1->val + l2->val;
    l3->val = sum % 10;
    carry = sum / 10;
    printf("v3: %d\n", l3->val);
    l3->next = NULL;

    if(l1->next != NULL || l2->next != NULL){
        if(l1->next != NULL){
            l1 = l1->next;
            v1 = l1->val;
        }
        else{
            v1 = 0;
        }
        if(l2->next != NULL){
            l2 = l2->next;
            v2 = l2->val;
        }
        else{
            v2 = 0;
        }
        l3->next = (Node*)malloc(sizeof(Node));
        l3 = l3->next;

        sum = v1 + v2 + carry;
        l3->val = sum % 10;
        carry = sum / 10;
        printf("v3: %d\n", l3->val);

        l3->next = NULL;
    }

    return l3;
}