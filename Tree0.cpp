//Binary Tree
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
	TreeNode* insert(TreeNode* const base,int item){
		if(!base) return new TreeNode(item);
		TreeNode* root = base;
		queue<TreeNode*> q;
		q.push(root);
		while(!(q.empty())){
			if(!(root->left)){
				root->left = new TreeNode(item);
				return base;
			}
			else if(!(root->right)){
				root->right = new TreeNode(item);
				return base;
			}
			else{
				q.pop();
				q.push(root->left);
				q.push(root->right);
				root = q.front();
			}
		}
	}
	int size(TreeNode* root){
		if(!root) return 0;
		return size(root->left) + size(root->right)+1;
	}
	void print(TreeNode* root){
		if(!root) return;
		print(root->left);
		cout<<root->data;
		print(root->right);
	}
	int max(TreeNode* root,int max_c){
		if(!root)  return max_c;
		if(max_c < root->data)
			max_c = root->data;
		max_c = max(root->left,max_c);
		max_c = max(root->right,max_c);
		return max_c;
	}
	bool find(TreeNode* root ,int item){
		if(!root) return false;
		if(root->data == item) return true;
		return find(root->left,item);
		return find(root->right,item);
	}
	int deepest_node(TreeNode* root){
		if(!root) return -1;
		queue<TreeNode*> q;
		q.push(root);
		int item;
		while(!(q.empty())){
			if(root->left)
				q.push(root->left);
			if(root->right)
				q.push(root->right);
			item = root->data;
			root = root->left;
			if(!root){
				q.pop();
				root = q.front();
			}
		}
		return item;
	}
};
int main(int argc, char const *argv[])
{
	TreeNode* root = nullptr;
	int n,item;
	cin>>n;
	while(n--){
		cin>>item;
		root = root->insert(root,item);
	}
	//root->print(root);
	cout<<root->deepest_node(root);
	return 0;
}