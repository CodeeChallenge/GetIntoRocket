#include <stdio.h>
#include <stdlib.h>
//circular linked list.. 
typedef struct Node{
	int data;
	struct Node* clink;
}node;
//functions
node* create(node* start,int item);
node* push(node* start,int item);
void push(node** start,int item);
node* push(node* start,int item,int position);
void print(node* start);
node* pop(node* start);
node* idelete(node* start,int position);
node* remove(node* start,int item);
int main(){
	node* start=NULL;
	start=push(start,1);
	start=push(start,2);
	start=push(start,3); 
	start=push(start,4);
	start=push(start,5);
	start=push(start,6);
	push(&start,7);
	start=push(start,8);
	start=push(start,10,10);        //(nodeHead,item,position)
	start=push(start,9,10);
	start=push(start,56,6);
	start=pop(start);
	start=remove(start,6);              //(nodeHead,item)
	start=idelete(start,7);              //(nodeHead,position) 
	print(start);                
	return 0;
}

node* create(node* start,int item){
	node* temp=(node*)malloc(sizeof(node));
	temp->data=item;
	temp->clink=temp;
	return temp;
}
node* push(node* start,int item){
	if(start==NULL){
		return create(start,item);
	}
	else{
		node* t=start;
		do{
			t=t->clink;
		}while(t->clink!=start);
	node* te=create(start,item);
	t->clink=te;
	te->clink=start;
	return start;
	}
}
void push(node** start,int item){
	if(*start==NULL){
		*start=create(*start,item);
		return;
	}
	else{
		node* t=*start;
		do{
			t=t->clink;
		}while(t->clink!=*start);
	node* te=create(*start,item);
	t->clink=te;
	te->clink=*start;
	}
}

node* push(node* start,int item,int position){
	if(start==NULL || position == 1){
		return create(start,item);
	}
	else{
		node* t=start,*s;
		for(int i=1;i<position;i++){
			t=t->clink;
		}
	node* te=create(start,item);
	s=t->clink;
	t->clink=te;
	te->clink=s;
	return start;
	}
}

void print(node* start){
	node* temp=start;
	do{
		printf("%d ",temp->data);
		temp=temp->clink;
	}while(temp!=start);
}

node* pop(node* start){
	if(start==NULL)
		return start;
	node* t=start;
	while(t->clink->clink!=start){
		t=t->clink;
	}		
	t->clink=start;
	return start;
}

node* idelete(node* start,int position){
	node* temp=start;
	while(position--){
		if(temp->clink == start)
			break;
		temp=temp->clink;
	}
	temp->clink=temp->clink->clink;
	return start;
}

node* remove(node* start,int item){
	node* temp=start;
	do{
		if(temp->clink->data == item){
			temp->clink=temp->clink->clink;
		}
		temp=temp->clink;
	}while(temp->clink!=start);
	return start;
}