#include <bits/stdc++.h>
using namespace std;
class LinkedList{
	public:
		int data;
		LinkedList* next = nullptr;
		LinkedList(){
			this->data = 0;
			this->next = nullptr;
		}
		void insert(int item){
			LinkedList* node = new LinkedList; 
			if(!this->next)
				this->next = node;
			LinkedList* temp = this->next;			
			while(temp->next){
				temp = temp->next;
			}
			temp->next = node;
		}
		void print(string sepr){
			LinkedList* temp = this->next;			
			while(temp){
				cout<<temp->data<<sepr;
				temp = temp->next;
			}
		}
};
int main(){
	LinkedList i = new LinkedList();
	i.insert(1);
	i.print(' ');
	return 0;
}