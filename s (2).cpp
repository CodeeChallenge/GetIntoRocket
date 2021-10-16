#include <iostream>
#include <cstddef>
#include <bits/stdc++.h>
using namespace std;	
class Node
{
    public:
        int data;
        Node *next;
        Node(int item){
            data=item;
            next=nullptr;
        }
     Node* insert(Node * const head,const int data)
      {
          Node * newNode = new Node(data);
          Node * tail = head;
          if ( !head ) { return newNode; }
          
          // Locate tail node
          for (;tail->next; tail = tail->next);

          // Insert at end of list
          tail->next = newNode;
          
          return head;
      }
      void display(Node *head)
      {
          Node *start=head;
          while(start)
          {
              cout<<start->data<<" ";
              start=start->next;
          }
      }   
};
int main()
{
	Node* head = nullptr;
    int T,data;
    cin>>T;
    while(T-->0){
        cin>>data;
        head=head->insert(head,data);
    }	
	head->display(head);
		
}