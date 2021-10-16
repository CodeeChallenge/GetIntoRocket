#include <stdio.h>
#include <stdlib.h>
struct node{
	int data;
	struct node* link;
};
struct node* push(struct node* head,int item);
void print(struct node* head);
int main(){
	struct node* head=NULL;
	head = push(head,1);
	head = push(head,2); 
	print(head);
	return 0;
}
void print(struct node* head){
	struct node* temp=head;
	while(temp!=NULL){
		printf("%d ",temp->data);
		temp = temp->link; 
	}
}
struct node* push(struct node* head,int item){
	struct node* new;
	new= (struct node*)malloc(sizeof(struct node));
	new->data = item;
	new->link = NULL;

	if(head == NULL){
		head = new;
		return head;
	}
	struct node* temp = head;
	while(temp->link!=NULL){
		temp = temp->link;
	}
	temp->link = new;
	return head;
}