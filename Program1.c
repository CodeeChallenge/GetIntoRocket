//stack push,pop ,print
#include <stdio.h>
#include <stdlib.h>
struct node{
	int data;
	struct node* link;
};
struct node* push(struct node* head,int item);
void print(struct node* head);
struct node* pop(struct node* head);

int main(){
	struct node* head=NULL;
	int menu=1,operation,item;
	do{
		printf("\n\n\n\n\n Enter operation1.push\n2.pop\n3.print\n");
		scanf("%d",&operation);
		switch(operation){
			case 1:
				printf("\nEnter the item\n");
				scanf("%d",&item);
				head=push(head,item);
				break;
			case 2:
				head=pop(head);
				break;
			case 3:
				print(head);
				break;
			default:
				exit(1);
				break;			
		}
		printf("\nWanna operate again\n\n");
		scanf("%d",&menu);
	}while(menu);
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
		temp->link=head;
		head=temp;
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

/*Algorithms for push in stack
1.function : push[item,top]
		1.Allocate memory of the size of node
		2.insert data/element of node temp->data=item
		3.if stack is empty ,then insert NULL in address part of new node
		4.else,link new node with previous node temp->link=top
		5.update top ,as new top ,top=temp
2.function :pop[top]
		1.if top ==NULL then ,stack is empty and can't be deleted .
		2.else,
			a.take temp var ,temp,and store the address of top most element
			b.update pointer var ,top ,to point next node
			c.dellocate the memory of the node.
		3.end
					
3.function : print[top]
		1.if top==NULL,it is empty 
		2.set ptr =top
		3.repeat the steps untill ptr !=NULL
			a.access ptr->data
			b.print ptr->data
		4.END	

*/