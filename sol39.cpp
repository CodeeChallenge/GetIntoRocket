//delete val element in linked list.
#include <bits/stdc++.h>
using namespace std;
struct node{
	int item;
	node* next;
};
//delete all nodes
//reverse nodes
void push(node** head,int data);
void pop(node** head,int data);
void print(node* head);
int main(){
	node* head=NULL;
	for(int i=0;i<8;i++)
		push(&head,i);
	print(head);
	pop(&head,1);
	printf("\n");
	print(head);
	pop(&head,5);
	printf("\n");
	print(head);
	pop(&head,7);
	printf("\n");
	print(head);
	return 0;
}
void push(node** head,int data){
	
	node* temp=(node*)malloc(sizeof(node));
	temp->item = data;
	temp->next = NULL;
	
	if(*head ==  NULL){
		*head = temp;
		return;
	}
	else{
		node* t= *head;
		while(t->next != NULL){
			t = t->next;
		}
		t->next = temp; 
	}
}
void pop(node** head,int data){
 	if(*head == NULL)
 		return;
 	node* temp=*head;
 	while(temp ->next->next!= NULL){
 		if(temp->item == data){
 			temp->next = temp->next->next;  
 		}
 		temp=temp->next;
 	}
}
void print(node* head){
	node* temp = head;
	while(temp != NULL){
		printf("%d ",temp->item);
		temp = temp->next;
	} 
}