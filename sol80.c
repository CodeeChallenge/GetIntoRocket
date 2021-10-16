#include "linkedlist.h"
/*
	@author -Ayush Kapri
	 This is a program for a singly linked list ,
	 and has a lot of operations likes insertion,
	 deletion, reversing, removingDuplicates etc.
  NOTE-
	See Documentation of the linkedlist.h to see documentation 
	on each of the modules/function for functionality and 
	syntax.
*/

int main(){
	struct node *head = NULL;
	append(&head,1);
	append(&head,2);
	append(&head,3);
	append(&head,4);
	append(&head,5);
	append(&head,6);
	insert(&head,7,len(head));
	print(head);
	return 0;
}