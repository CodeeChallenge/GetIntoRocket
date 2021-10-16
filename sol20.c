//merge 2 array
//convert array to linked list
//generate 1 more linked list.
//merge 2 linked list 
//rotate linked list k times
#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
#define MAX 10
struct list{
	int data;
	struct node* link;
};
void inputarray(int * Arr,int n);
int merge(int* Arr3,int n3,int* Arr1,int n1,int* Arr2,int n2);
struct node* push(struct node*head,int item);
void print(struct node* head);
int main(){
	int Arr1[SIZE],Arr2[SIZE],Arr3[MAX];
	int n1,n2,n3;
	
	printf("\nEnter size of Arr1\n");
	scanf("%d",&n1);
	inputarray(Arr1,n1);

	printf("\nEnter size of Arr2n");
	scanf("%d",&n2);
	inputarray(Arr2,n2);

	n3=merge(Arr3,n3,Arr1,n1,Arr2,n2); 
	   struct node*head=NULL;
	   for(int i=0;i<n3;i++)
	   		head=push(head,Arr3[i]);
	print(head);
	return 0;
}
void inputarray(int* Arr,int n){
	printf("\nEnter elements in Arr\n");
	for(int i=0;i<n;i++)
		scanf("%d",&Arr[i]);
}
int merge(int* Arr3,int n3,int* Arr1,int n1,int* Arr2,int n2){
	int i=0,j=0,k=0;
	while(i < n1 && j < n2){
		if (Arr1[i] > Arr2[j]){
			Arr3[k++] = Arr2[j++];
		}
		else if (Arr1[i] < Arr2[j]){
			Arr3[k++] = Arr1[i++];
		}
		else{
			Arr3[k++] = Arr2[j++];
			Arr3[k++] = Arr1[i++];
		}
	}
	while(i < n1){
		Arr3[k++] = Arr1[i++];
	}
	while(j < n2){
		Arr3[k++] = Arr2[j++];
	}
	return k;
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
	while(t){
		printf("%d ",t->data);
		t=t->link;
	}
}