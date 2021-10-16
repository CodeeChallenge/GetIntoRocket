//Binary Search Tree
#include <bits/stdc++.h>
using namespace std;
class TreeNode{
	public:
		int data;
		TreeNode* left;
		TreeNode* right;
		TreeNode(int item){
			this->data = item;
			this->left = nullptr;
			this->right = nullptr;
		}
		TreeNode* insert(int item,TreeNode* const root){
			if(!root)
				return new TreeNode(item);
			TreeNode* temp = root;
			while(temp){
				if(!(temp->left) && (temp->data >= item)){
					temp->left = new TreeNode(item);
					break;
				}
				if(!(temp->right) && (temp->data < item)){
					temp->right = new TreeNode(item);
					break;
				}
				if(temp->data <= item)
					temp = temp->right;
				else
					temp = temp->left;
			}
			return root;
		}
		int min_item(TreeNode* root){
			if(!root)
				return INT_MIN;
			while(root){
				if(!(root->left))
					return root->data;
				root = root->left;
			}
		}
		int max_item(TreeNode* root){
			if(!root)
				return INT_MAX;
			while(root){
				if(!(root->right))
					return root->data;
				root = root->right;
			}
		}
		bool search(TreeNode* root,int item){
			while(root){
				if(root->data == item)
					return true;
				if(root->data >= item)
					root = root->right;
				else
					root = root->left;
			}
			return false;
		}
		void BFS(TreeNode* root){
			if(!root)
				return;
			queue<TreeNode*> Q;
			Q.push(root);
			while(!Q.empty()){
				if(root->left)
					Q.push(root->left);
				if(root->right)
					Q.push(root->right);
				cout<<(Q.front())->data<<endl;
				Q.pop();
				root = Q.front();
			}
		}
		//inprogress
		void DFS_in_order(TreeNode* root){
			stack<TreeNode*> s;
			do{
				s.push(root);
				root = root->left;
				if(!root){
					root = s.top();
					s.pop();
					cout<<root->data;
					root = root->right;
				}
			}while(!(s.empty()));
		}
		bool IsBST1(TreeNode* root){
			return helper(root,INT_MAX,INT_MIN);
		}
		//utility for IsBST1 
		bool helper(TreeNode* root, int Max, int Min){
			if(!root)
				return true;
			if(helper(root->left,root->data,Min) && 
				helper(root->right,Max,root->data) &&
				(root->data > Min) && (root->data < Max))
				return true;
			else
				return false;
		}
		bool IsBST(TreeNode* root){
			//O(n^2)
			if(!root)
				return true;
			if(bigger(root->right,root->data) && 
				smaller(root->left,root->data) &&
				IsBST(root->left) && IsBST(root->right))
					return true;
			else
				return false;
		}
		//utility function for IsBST
		bool bigger(TreeNode* root, int item){
			if(!root)
				return true;
			if((root->data > item) && bigger(root->right,root->data))
				return true;
			else
				return false;

		}
		bool smaller(TreeNode* root, int item){
			if(!root)
				return true;
			if((root->data < item) && smaller(root->left,root->data))
				return true;
			else
				return false;

		}

		int height(TreeNode* root){
			if(!root)
				return -1;
		return max(height(root->left),height(root->right))+1;
		}
		TreeNode* remove(TreeNode* root,int item){
			if(!root) return nullptr;
			if(root->data > item)
				root->left = remove(root->left,item);
			else if(root->data < item)
				root->right = remove(root->right,item);
			else{
				if(!root->left){
					TreeNode* temp = root->right;
					free(root);
					return temp;
				}
				else if(!root->right)
				{
					TreeNode* temp = root->right;
					free(root);
					return temp;
				}	
				else{
					TreeNode* temp = inorder_succ(root->right);
					root->data = temp->data;
					root->right = remove(root->right,temp->data);
				}
			}
			return root;
		}
		//utility function for remove
		TreeNode* inorder_succ(TreeNode* root){
			//find the left most value
			TreeNode* temp = root;
			while(temp && temp->left){
				temp = temp->left;
			}
			return temp;
		}
	TreeNode* wipe_tree(TreeNode* root){
		if(!root)
			return nullptr;
		return wipe_tree(root->left);
		return wipe_tree(root->right);
		delete root;
	}
};
void visualise_Array_asBinaryTree(){
	int n,item;
	cin>>n;
	vector<int> tree;
	for(int i = 0 ; i < n ; i++){
		cin>>item;
		tree.push_back(item);
	} 
}
int main(int argc, char const *argv[])
{
	int n, item;
	cin>>n;
	TreeNode* root = nullptr;
	while(n--){
		cin>>item;
		root = root->insert(item,root);
	}
	/*
	// Search an item
	if(root->search(root,3))
		cout<<"True";
	else
		cout<<"False";
	*/

	//Minimum element in Tree
	//cout<<"\n"<<root->min_item(root);
	
	//Breadth First Search 
	/*
	root->BFS(root);
	*/

	//Depth First Search 
	/*cout<<"\n1.In-order\n2.Post-order\n3.\
	Pre-order\n";
	int choice;
	cin>>choice;
	if(choice == 1)
		root->DFS_in_order(root);
	if(choice == 2)
		root->DFS_post_order(root);
	if(choice == 3)
		root->DFS_pre_order(root);
	*/
	//Height of binary tree
	//cout<<root->height(root);
	
	//check if binary-tree is BST
	//you make call IsBST() or IsBST1() 
	//cout<<root->IsBST1(root);
	
	//visualise_Array_asBinaryTree();
	
	//remove a node in a binary tree
	root->BFS(root);
	root->wipe_tree(root);
	cout<<endl;
	root->BFS(root);
	cout<<endl;
	return 0;
}