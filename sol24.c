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
	//insert by element
	start=push(start,1);
	start=push(start,2);
	start=push(start,3);
	start=push(start,4);
	print(start);
	/* push(&start,3);        //referencial push
	start=push(start,4);
	start=push(start,5);
	start=push(start,6);
	start=push(start,7);
	start=push(start,8);
	start=push(start,0,1);        //(nodeHead,item,position)
	start=push(start,9,10);
	start=push(start,56,6);
	print(start);
	start=pop(start);
	print(start);
	start=remove(start,3);              //(nodeHead,item)
	print(start);
	start=idelete(start,7);              //(nodeHead,position) 
	print(start);                
	*/
	return 0;
}

node* create(node* start,int item){
	node* temp=(node*)malloc(sizeof(node));
	temp->data=item;
	temp->clink=temp;
	return temp;
}
node* push(node* start,int item){
	/* check if empty. 
	     push first element */ 
	if(start==NULL){
		return create(start,item);
	}
	//normal condition
	else{
		node* temp=create(start,item);
		temp->clink=start;
		start->clink=temp;
		return temp;
	}
}
void push(node** start,int item){
	/* check if empty. 
	     push first element */ 
	//normal condition

}

node* push(node* start,int item,int position){
	printf("hi");
}

void print(node* start){
	node* temp=start;
	do{
		printf("%d ",temp->data);
		temp=temp->clink;
	}while(temp!=start);
}

node* pop(node* start){
printf("hi");
}

node* idelete(node* start,int position){
printf("hi");
}

node* remove(node* start,int item){
printf("hi");
}