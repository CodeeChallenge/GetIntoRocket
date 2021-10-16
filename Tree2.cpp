#include <bits/stdc++.h>
using namespace std;
struct Node{
	int data;
	Node* left;
	Node* right; 
};
Node* insert(Node* root,int item){
	Node* temp = nullptr;
	temp = (Node*)malloc(sizeof(Node));
	temp->data = item;
	temp->left = nullptr;
	temp->right = nullptr;
	if(!root)
		return temp;
	Node* temp1 = root;
	while(temp1){
		if(temp1->data < item){
			if(temp1->right)
				temp1 = temp1->right;
			else{
				temp1->right = temp;
				return root;
			}
		}
		else{
			if(temp1->left)
				temp1 = temp1->left;
			else{
				temp->left = temp;
				return root;
			}
		}
	}
}
void print(Node* root){ if(!root) return;
	print(root->left);
	print(root->right);
	cout<<root->data;
}

int main()
{
	struct Node* root = nullptr;
	int n,item;
	cin>>n;
	while(n--){
		cin>>item;
		root = insert(root,item);
	}
	cout<<leaf(root);
	return 0;
}