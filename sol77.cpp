#include <stdio.h>
#include <stdlib.h>
struct node{
	int data;
	struct node* link;
};
struct node* push(struct node* head,int item);
void print(struct node* head);
int main(){
	struct node* head = NULL;
	head = push(head,1);
	head = push(head,2);
	head = push(head,3);
	head = push(head,4);
	head = push(head,5);
	print(head);
	return 0;
}
struct node* push(struct node* head,int item){
	struct node* temp;
	temp = (struct node*)malloc(sizeof(struct node));
	temp -> data = item;
	temp -> link = NULL;

	struct node* trev = head;
	while(trev -> link != NULL){
		trev = trev->link;
	}
	trev->link = temp;
	return head;
}
void print(struct node* head){
	struct node* trev = head;
	while(trev != NULL){
		printf("%d ",trev->data);
		trev = trev->link;
	}
}