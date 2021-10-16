#include <stdio.h>
#include <stdlib.h>

struct ListNode{
    int val;
    struct ListNode* next; 
};
struct ListNode* push(struct ListNode* l1,int item);
void print(struct ListNode* head);
struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2);
int main(){
    int n = 10;
    struct ListNode* l1 = NULL,*l2 = NULL;
    	for(int i=0;i<n;i++)
        	{
           if(i%2)
             l2 = push(l2,i);
           else
             l1 = push(l1,i); 
        }
    l1 = mergeTwoLists(l1,l2);
    printf("\nl1->");
    print(l1);    
    return 0;
}
void print(struct ListNode* head){
    struct ListNode* temp = head;
    while(temp!=NULL){
        printf("%d ",temp->val);
        temp = temp->next;
    }
}
struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2){
    //if both are empty
    if(l1 == NULL && l2 == NULL)
    	return NULL;
    //if l1 is empty
    if(l1 == NULL){
    struct ListNode* list1 = l2,*list2 = l2;
    int temp;
    for(;list1!=NULL;list1=list1->next){
        list2 = l2;
        for(;list2!=NULL;list2=list2->next){
            if(list1->val < list2->val){
                temp = list1->val;
                list1->val = list2->val;
                list2->val = temp; 
            }
        }     
    }
    return l2;
    }
    //for l2 to empty
    if(l2 == NULL){
    struct ListNode* list1 = l1,*list2 = l1;
    int temp;
    for(;list1!=NULL;list1=list1->next){
        list2 = l1;
        for(;list2!=NULL;list2=list2->next){
            if(list1->val < list2->val){
                temp = list1->val;
                list1->val = list2->val;
                list2->val = temp; 
            }
        }     
    }
    return l1;
    }

    struct ListNode* list1 = l1;
    while(list1->next != NULL){
        list1 = list1 -> next; 
    }
    	list1->next = l2;
    	list1 = l1;
    struct ListNode* list2 = l1;
    int temp;
    for(;list1!=NULL;list1=list1->next){
        list2 = l1;
        for(;list2!=NULL;list2=list2->next){
            if(list1->val < list2->val){
                temp = list1->val;
                list1->val = list2->val;
                list2->val = temp; 
            }
        }     
    }
    return l1;
}

struct ListNode* push(struct ListNode* l1,int item){
    
    struct ListNode* temp;
    struct ListNode* new1;
    new1 = (struct ListNode*)malloc(sizeof(struct ListNode));
    new1->val = item;
    new1->next = NULL;
    
    if(l1 == NULL){
            return new1;
        }    
    else{
        struct ListNode* t = l1;
        while(t->next!=NULL){
            t=t->next;
        }
        t->next=new1;
        return l1;
    }    
}