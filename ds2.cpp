#include <bits/stdc++.h>
using namespace std;
class SNode{
	public:
		int data;
		SNode* next;
		//constructor for initilizing
		SNode(int data){
			this->data = data;
			this->next = nullptr;
		}
};
class SList{
	public:
		SNode* head;
		SList(){
			this->head = nullptr;
		}
};
SNode* insert(int item,SNode* head){
	SNode* temp = new SNode(item);
	if(head == nullptr){
		head = temp;
	}
	else{
		SNode* temp1 = head;
		while(temp1->next){
			temp1 = temp1->next;
		}
		temp1->next = temp;
	}
	return head;
}
void print(SNode* head){
	while(head){
		cout<<head->data;
		head = head->next;
	}
}
int main(){
	SList* head = new SList();
	int item = 1;
	//insert(item,&head);
	head->head= insert(item,head->head);
	print(head->head);
	return 0;
}