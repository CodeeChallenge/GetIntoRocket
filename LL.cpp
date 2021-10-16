#include <bits/stdc++.h>
using namespace std;
class LNode{
	public:
		int data;
		LNode* next;
		LNode(int data){
			this->data = data;
			this->next = nullptr;
		}
		void print(){
			while(this->head){
				cout<<this->head->data;
				this->head = this->head->next;
			}
		}
		void insert(int item){
			LNode* temp = new LNode(item);
			if(!head)
				return;
			LNode* temp2 = head;
			while(temp2->next){
				temp2 = temp2->next;
			}
			temp2->next = temp;
		}
};
int main(){
	LNode* ob;
	int item = 1;
	ob.insert(item);
	ob.print();
	return 0;
}