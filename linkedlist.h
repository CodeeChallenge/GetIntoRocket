#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
/*
   This is the linkedlist.h header file for 
   all the modules/function in linked list.
*/
struct node{
	int data;
	struct node* next;
};

/*
	print(...)

	prints the values to the command line(standard input/output),
	Necessary Arguments -
	     object_name:   passing the object of the structure
	                    which is needed to be printed
	Example - 
			print(head);                                   
*/

void print(struct node* head){
	struct node* traverse = head;
	while(traverse != NULL){
		printf("%d ",traverse->data);
		traverse = traverse->next;
	}
}

/*
	Print(...)

	prints the values to the command line(standard input/output),
	Necessary Arguments -
	     object_name:   passing the object of the structure
	                    which is needed to be printed
	     size_of_obj:   size of the object to be passed
	                    or pass the limit to be printed
	Example - 
			Print(head,size);                                   
*/
void Print(struct node* head,int size){
	struct node* traverse = head;
	while(size--){
		if(size<0)
			return;
		printf("%d ",traverse->data);
		traverse = traverse->next;
	}
}


/*
	each and every time we want to add a new element we have to 
	allocate a new memory by malloc,calloc so making a seprate function is a 
	good choice ,to make the code simple and compact .

	NOTE- 
	  this function is called inplictily by the functions so 
	  don't need to bother about the syntax.

*/
struct node* newnode(int item){
	struct node* temp ;
	temp = (struct node*)malloc(sizeof(struct node));
	temp->data = item;
	temp->next = NULL;
	return temp;
}

/*
	append(...)

	appends the value at the last ,
	and returns the number of elements in linked list
	Necessary Arguments-
	    object_name:   passing the object of the structure
	                   in which we want to insert the item 
	Example -
		no_of_element = append(&head,item);	

*/
void append(struct node** head,int item){
	struct node* temp = NULL,*t = *head;
	temp = newnode(item);
	if(temp == NULL){
		printf("Error in creating memory\n");
		return;
	}
	else{
		if(*head == NULL){
			*head = temp;
			return;
		} 
		while(t->next != NULL)
			t = t->next;
	}
	t->next = temp;
	return;
}
/*
	len(...)

	find the lenght of the linked list.
	
	Necessary Arguments-
		returns -> lenght in int

		 int lenght = len(head); 
*/
int len(struct node* head){
	struct node* t = head;
	int l = 0;
	while(t != NULL){
		t = t->next;
		l++; 
	}
	return l;
}

/*
	min(...)

	find the minimun element in the linked list.
	
	Necessary Arguments-
		returns -> smallest data part,(int)

		 int smallest_element = min(head); 
*/
int min(struct node* head){
	struct node* t = head;
	int min_ = INT_MAX;
	while(t){
		if(min_ > t->data)
			min_ = t->data;
		t = t->next;
	}
	return min_;
}

/*
	max(...)

	find the maximum element in the linked list.
	
	Necessary Arguments-
		returns -> largest data part,(int)

		 int largest_element = max(head); 
*/
int max(struct node* head){
	struct node* t = head;
	int max_ = INT_MIN;
	while(t){
		if(max_ < t->data)
			max_ = t->data;
		t = t->next;
	}
	return max_;
}

/*
	insert(...)

	appends the value at the position ,
	
	Necessary Arguments-
	    object_name:   passing the object of the structure
	                   in which we want to insert the item 
	Example -
		append(&head,item,position);	

*/
void insert(struct node** head,int item,int pos){
	struct node* temp = newnode(item);
	struct node* t = *head,*t1 = *head;
	t1 = t1 ->next;
	if(pos <= 0){
		temp->next = *head;
		*head = temp;
		return;
	}
	while(pos-->1 && t->next != NULL){
		t = t->next;
		t1 = t1->next;
	}
	struct node* t2 = t,*t3 = t1;
	temp->next = t3;
	t2->next = temp;
}