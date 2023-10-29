typedef struct ListNode Node;
/*
bool isExist(Node **list_head, int key){
    Node **cur = list_head;
    //the list is null and has to be initialized
    if(cur == NULL){
        cur = (Node*)malloc(sizeof(Node));
        cur->val = key;
        cur->next = NULL;
        printf("list: %d\n", *cur->val);
        return false;
    }
    //find the key value
    while(*cur){
        printf("list: %d\n", *cur->val);
        if(*cur->val == key){ //found
            return true;
        }
        *cur = *cur->next;
    }
    //not found, then add the value to the list
    *cur = (Node*)malloc(sizeof(Node));
    *cur->val = key;
    *cur->next = NULL;
    return false;
}
*/
bool isHappy(int n){
    int div_number = 0;
    int mod_number = 0;
    int acc_number = 0;
    
    div_number = n;

    Node* list_head = NULL;
    Node *cur;

    if(n == 1){
        return true;
    }
    int data[100] = {0};
    printf("%d\n", data[0]);
    int count = 0;
    int i = 0;

    //initialize the list
    /*
    list_head = (Node*)malloc(sizeof(Node));
    list_head->val = div_number;
    list_head->next = NULL;
    printf("head: %d\n", list_head->val);
    */
    while(1){
        /*
        //check whether the value exists
        cur = list_head;

        //find the key value
        
        if(cur->next != NULL){
            while(cur){
                printf("list: %d\n", cur->val);
                if(cur->val == div_number){ //found
                    return false;
                }
                cur = cur->next;
            }

            //not found, then add the value to the list
            cur->next = (Node*)malloc(sizeof(Node));
            cur = cur->next;
            cur->val = div_number;
            cur->next = NULL;
        }
        */
        printf("find\n");
        for(i = 0; i < count; i++){
            printf("list: %d, div: %d\n", data[count], div_number);
            if(data[count] == div_number){
                return false;
            }
        }

        data[count] = div_number;
        count++;
        
        //printf("div: %d\n", div_number);

        while(div_number > 9){
            mod_number = div_number % 10;
            acc_number = acc_number + mod_number * mod_number;
            div_number = div_number / 10;
        }
        //mod_number = div_number;
        //printf("div: %d, mod: %d\n", div_number, mod_number);
        if(div_number == 1 && mod_number == 0){
            return true;
        }
        acc_number = acc_number + div_number * div_number;
        div_number = acc_number;
        acc_number = 0;
    }
    return false;
}