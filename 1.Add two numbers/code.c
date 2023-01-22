struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2){
    struct ListNode *temp1 = l1,*temp2 = l2,*temp3, *final = NULL;
    int carry = 0;
    while(temp1 && temp2){
        int data = temp1->val + temp2->val + carry;
        carry = 0;
        if(data>9){
            carry = data/10;
            data = data%10;
        }
        struct ListNode *newnode = NULL;
        newnode = (struct ListNode*)malloc(sizeof(struct ListNode));
        newnode->val = data;
        newnode->next = NULL;
        if (final == NULL){
            final = newnode;
        }
        else{
            temp3 = final;
            while(temp3->next){
                temp3 = temp3->next;
            }
            temp3->next = newnode;
        }
        temp1 = temp1->next;
        temp2 = temp2->next;
    }
    while(temp1){
       struct ListNode *newnode = NULL;
        newnode = (struct ListNode*)malloc(sizeof(struct ListNode));
        int data = temp1->val + carry;
        carry = 0;
        if(data>9){
            carry = data/10;
            data = data%10;
        }
        newnode->val = data;
        newnode->next = NULL;
        if (final == NULL){
            final = newnode;
        }
        else{
            temp3 = final;
            while(temp3->next){
                temp3 = temp3->next;
            }
            temp3->next = newnode;
        }
        temp1 = temp1->next;
    }
    while(temp2){
       struct ListNode *newnode = NULL;
       int data = temp2->val + carry;
       carry = 0;
        if(data>9){
            carry = data/10;
            data = data%10;
        }
        newnode = (struct ListNode*)malloc(sizeof(struct ListNode));
        newnode->next = NULL;
        newnode->val = data;
        if (final == NULL){
            final = newnode;
        }
        else{
            temp3 = final;
            while(temp3->next){
                temp3 = temp3->next;
            }
            temp3->next = newnode;
        }
        temp2 = temp2->next; 
    }
    if (carry){
        struct ListNode *newnode;
        newnode = (struct ListNode*)malloc(sizeof(struct ListNode));
        newnode->next = NULL;
        newnode->val = carry;
        if (final == NULL){
            final = newnode;
        }
        else{
            temp3 = final;
            while(temp3->next){
                temp3 = temp3->next;
            }
            temp3->next = newnode;
        }
    }
    return final;
}
