//doubly and circular linked list
#include <stdio.h>
#include <stdlib.h>
struct node{
	int data;
	struct node* prev;
	struct node* next;
};
struct node* distroyAll(struct node* head);
int countNodes(struct node* head);
void delete(struct node** head,int pos);
void print(struct node* head);
struct node* pointto(struct node* head,int item);
struct node* push(struct node* head,int item,int pos);
int main(){
	int loop = 1,op,item;
	struct node* head = NULL;
	while(loop){
		printf("Enter the operation \n1.push\n2.pop\n3.print\n");
		scanf("%d",&op);
		switch (op){
			case 1:
				printf("Enter the item\n");
				scanf("%d",&item);
				head = push(head,item,pos);
				break;
			case 2:
				printf("\nEnter the position to delete\n");
				scanf("%d",&pos);
				//delete(&head,pos);
				break;	
			case 3:
				print(head);	
				break;
		}
		printf("Do you wanna continue 1/0");
		scanf("%d",&loop);
	}
	return 0;
}
struct node* push(struct node* head,int item,int pos){
	
	struct node* newNode,*temp = head;
	newNode = (struct node*)malloc(sizeof(struct node));
	newNode -> data = item;
	newNode ->prev = newNode;
	newNode -> next = newNode;

	if(head == NULL){
		return newNode;
	}
	while(temp->next != head){
		temp = temp->next;
	}
	temp->next = newNode;
	newNode->prev = temp;
	newNode->next = head;
	head->prev = newNode;
	return head;
}

void print(struct node* head){
	struct node* temp = head;
	while(temp->next != head){
		printf("%d ",temp->data);
		temp = temp->next;
	}
	printf("%d\n",temp->data);
}
struct node* distroyAll(struct node* head);
int countNodes(struct node* head);
void delete(struct node** head,int pos);
struct node* pointto(struct node* head,int item);