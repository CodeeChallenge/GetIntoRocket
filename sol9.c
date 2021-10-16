//prime numbers in binary tree  
#include <bits/stdc++.h>
struct node{
	int data;
	node* left,*right;
};
int max(node* bhead);
bool search(node* bhead,int item);
node* insert(node* bhead,int item);
node* print(node* bhead);
node* create(int item);
int main(){
	struct node *root = NULL; 
    root = insert(root, 50); 
    insert(root, 30); 
    insert(root, 20); 
    insert(root, 40); 
    insert(root, 70); 
    insert(root, 60); 
    insert(root, 80); 
   	print(root); 
   	printf("\n =%d",bool(search(root,60)));
   	
    return 0; 
}
node* insert(node* bhead,int item){
	if(bhead==NULL)
		return create(item);
	else{
		if(bhead->data > item)
			bhead->left=insert(bhead->left,item);
		else
			bhead->right=insert(bhead->right,item);
	}
	return bhead;
}
node* print(node* bhead){
	if(bhead!=NULL){
		print(bhead->left);
		printf("%d ",bhead->data);
		print(bhead->right);
	}
}
node* create(int item){
	node* temp=(node*)malloc(sizeof(node));
	temp->data=item;
	temp->left=NULL;
	temp->right=NULL;
	return temp;
}
int max(node* bhead){
	int max1=bhead->data;
	node* b=bhead;
	while(b->right!=NULL)
		b=b->right;
	return b->data;
}
bool search(node* bhead,int item){
	if(bhead!=NULL){
		if(bhead->data > item)
			search(bhead->left,item);
		else if(bhead->data < item)
			search(bhead->right,item);
		else if(bhead->data== item)
			return true;			
	}
	return false;
}