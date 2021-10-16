//circular queue add,del,print
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
	if(head==NULL)
	{
		head=temp;
		temp->link=head;
		return head;
	}
	else{
		struct node* q=head;
		do{
			q=q->link;
		}while(q->link!=head);
		q->link=temp;
		temp->link=head;
		return head;
	}
}
void print(struct node* head){
	struct node* t=head;
	do{
		printf("%d",t->data);
		t=t->link;
	}while(t!=head);
}
struct node* pop(struct node* head){
	struct node* q=head;
	if(head==NULL)
		return head;
	else{
		do{
			q=q->link;
		}while(q->link->link!=head);
		struct node* w=q;
		q->link=NULL;
		free(q->link);
	}
	return head;
}
/*
Algorithm 
	function :push(start,item):
		1.Allocate the memory for new node,let us new node is NewNode
		2.Add the item in NewNode->data=item.
		3.if start (which is the start of linkded list) then,add 
		  that normally by,start=temp
		  else:
		  	take a pointer of type NewNode and traverse the NodePointer till 
		  	we don't reach to the last pointer ,
		  	when we reach the last node ,add the NewNode to the last element.
		  	by ,ptr->link=NewNode
		  4.END
		  
	2.function :pop[top]
		1.if top ==NULL then ,linked list is empty and can't be deleted .
		2.else,
			
			a.traverse the node till the last node ,
			b.take temp var ,temp,and store the address of top most element
			c.update pointer var ,top ,to point next node
			d.dellocate the memory of the node.
		3.end
	3.function : print[top]
		1.if top==NULL,it is empty 
		2.set ptr =top
		3.repeat the steps untill ptr !=NULL
			a.access ptr->data
			b.print ptr->data
		4.END	
	4.function :pushf(start,item):
		1.Allocate the memory for new node,let us new node is NewNode
		2.Add the item in NewNode->data=item.
		3.if start (which is the start of linkded list) then,add 
		  that normally by,start=temp
		  else:
		  	store the address to the newly created node ,
		  	add the NewNode to the last element,point the start to the new node .
		  	by ,ptr->link=NewNode
		  4.END
		  	  	
*/