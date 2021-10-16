//Binary Tree 
//inorder ,preorder and postorder
#include <bits/stdc++.h>
using namespace std;
class Node{
 public:
	int data;
	Node* left;
	Node* right;
	Node(int item){
		this->left= nullptr;
		this->right= nullptr;
		this->data = item;
	}
	Node* insert(int item,Node* root){
		Node* temp = new Node(item);
		if(!root) return temp;
		queue<Node*> q;
		q.push(root);
		while(!q.empty()){
			Node* temp1 = q.front();
			if((temp1->left) && (temp1->right)){
				q.push(temp1->left);
				q.push(temp1->right);
				q.pop();
				continue;
			}
			if(temp1->left){
				temp1->right = temp;
				break;
			}
			else{
				temp1->left = temp;
				break;
			}
		}
		return root;
	}
	void inorder(Node* root){
		if(!root) return;
		inorder(root->left);
		
		cout<<root->data;
		inorder(root->right);
	}
};
int main(){
	Node* root = nullptr;
	int n,item;
	cin>>n;
	while(n--){
		cin>>item;
		root = root->insert(item,root);
	}
	root->inorder(root);
	cout<<endl;
	return 0;
}