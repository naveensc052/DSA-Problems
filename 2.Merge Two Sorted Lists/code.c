/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2){
    struct ListNode *temp1, *temp2, *temp3, *final = NULL;
    temp1 = list1;
    temp2 = list2;
    while(temp1 && temp2){
        struct ListNode *newnode;
        newnode = (struct ListNode *)malloc(sizeof(struct ListNode));
        newnode->next = NULL;
        if(temp1->val < temp2->val){
            newnode->val = temp1->val;
            temp1=temp1->next;
            if(final == NULL){
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
        else{
            newnode->val = temp2->val;
            temp2=temp2->next;
            if(final == NULL){
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
    }
    while(temp1){
        struct ListNode *newnode;
        newnode = (struct ListNode *)malloc(sizeof(struct ListNode));
        newnode->next = NULL;
        newnode->val = temp1->val;
        temp1 = temp1->next;
        if(final == NULL){
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
    while(temp2){
        struct ListNode *newnode;
        newnode = (struct ListNode *)malloc(sizeof(struct ListNode));
        newnode->next = NULL;
        newnode->val = temp2->val;
        temp2 = temp2->next;
        if(final == NULL){
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
