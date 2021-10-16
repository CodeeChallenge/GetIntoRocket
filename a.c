#include <stdio.h>
#include <stdlib.h>
//check for palendrome linked list
struct node{
	int data;
	struct node* link;
};
struct node* push(struct node* head,int item);
void print(struct node* head);
struct node* pop(struct node* head);
int check(struct node* head);
int main(){
	struct node* head=NULL;
	for(int i=0;i<5;i++)
		head=push(head,i);
	print(head);
	//printf("%d",check(head));
	pop(head);
	printf("\n");
	print(head);
	return 0;
}
struct node* push(struct node* head,int item){
	
	struct node* temp=(struct node*)malloc(sizeof(struct node));
	temp->data=item;
	temp->link=NULL;

	if(head==NULL)
	{
		head=temp;
		return head;
	}
	else{
		struct node* q=head;
		while(q->link!=NULL)
			q=q->link;
		q->link=temp;
		return head;
	}
}
void print(struct node* head){
	struct node* t=head;
	while(t!=NULL){
		printf("%d",t->data);
		t=t->link;
	}
}
struct node* pop(struct node* head){
	struct node* q=head;
	if(head==NULL)
		return head;
	else{
		while(q->link->link!=NULL){
			q=q->link;
		}
		struct node* w=q;
		q->link=NULL;
		free(q->link);
	}
	return head;
}
int check(struct node* head){
	
}