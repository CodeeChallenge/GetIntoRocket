#include <stdio.h>
#include <stdlib.h>
typedef struct node{
	int data;
	struct node* link;
}node;
void push(node** head,int item);
void pop(node** head);
void pushatmid(node** head,int item,int pos);
void print(node* head); 
int main(){
	node *head=NULL;
	pushatmid(&head,0,0);
	push(&head,1);
	push(&head,2);
	pushatmid(&head,3,3);
	push(&head,4);
	push(&head,5);
	pushatmid(&head,6,6);
	pushatmid(&head,7,7);
	pushatmid(&head,8,10);
	print(head);
	return 0;
}
void push(node** head,int item){
	
	node* temp=(node*)malloc(sizeof(node));
	temp->data=item;
	temp->link=NULL;

	if(*head==NULL){
		*head=temp;
		return;
	}
	else{
		node* t=*head;
		while(t->link)
			t=t->link;
		t->link=temp;
		return;
	}
}
void pop(node** head){
	if(*head==NULL){
		printf("\nUnderFlow\n");
	}
	node* trev=*head;
	while(trev->link->link!=NULL)
		trev=trev->link;
	node* r=trev;
	free(r->link);
	trev->link=NULL;
}
void pushatmid(node** head,int item,int pos){
	node* temp=(node*)malloc(sizeof(node));
	temp->data=item;
	temp->link=NULL;

	if(*head==NULL)
		*head=temp;
	else{
		node* t=*head;
		if(pos==0){
			temp->link=*head;
			*head=temp;
		}
		else{
			while(--pos){
				t=t->link;
				if(t->link==NULL)
					break;
			}
			temp->link=t->link;
			t->link=temp;
		}
	}
}
void print(node* head){
	node* q=head;
	while(q){
		printf("%d ",q->data);
		q=q->link;
	}
}