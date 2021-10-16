#include <bits/stdc++.h>
using namespace std;
class Node{
	public :
		int data;
		Node* next;
};
void print(Node* head){
	while(head!=nullptr){
		cout<<head->data<<endl;
		head = head->next;
	}
}
Node* insert(Node* head,int item){
	Node* temp = new Node;
	temp->data = item;
	temp->next = nullptr;
	Node* trav = head;
	if(head == nullptr)
	{	head = temp;
		return head;
	}
	else{
		while(trav->next != nullptr)
			trav = trav->next;
	}
	trav->next = temp;
	return head;
}
Node* alter(Node* head){
	if(!head || head->next ==nullptr)
		return head;

	Node* newhead = head->next;
	Node* p1 = head,*p2 = head->next,*temp;
	while(1){
		p1->next = p2->next;
		p2->next = p1;
		p1 = p1->next;
		p2 = p1->next; 
		cout<<p1->data;
		cout<<p2->data;
		break;
		//if(p1->next == nullptr || p1->next->next == nullptr)
			return newhead;
		
	}
}
int main(){
	Node* head = nullptr;
	head = insert(head,1);
	head = insert(head,2);
	head = insert(head,3);
	head = insert(head,4);
	head = insert(head,5);
	head = insert(head,6);
	head = insert(head,7);
	head = insert(head,8);

	head = alter(head);
	//print(head);
	return 0;
}