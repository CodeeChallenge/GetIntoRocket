#include <bits/stdc++.h>
using namespace std;
/**
 * Definition for singly-nexted list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
struct ListNode{
	int val;
	ListNode* next;
};
ListNode* push(ListNode* head,int item);
ListNode* pop(ListNode* head,int item);
void minmax(ListNode* head);
int main(){
	ListNode* head=NULL;
	int n,item;
	//no of operations
	cin>>n;
	char *A[n],temp[5];
	for(int i=0;i<n;i++){
		cin>>temp;
		fflush(stdin);
		A[i]=(char*)malloc(sizeof(char)*4);
		strcpy(A[i],temp);
	}
	cin>>n;	
	for(int i=0;i<n;i++){
		cin>>item;
		if(A[i][1]=='u')
			head = push(head,item);
		else
			head = pop(head,item);
		minmax(head);
		cout<<endl;
	}
	
	return 0;
}
ListNode* create(int item){
	ListNode* temp=(ListNode*)malloc(sizeof(ListNode));
	temp->val=item;
	temp->next=NULL;
	return temp;
}
ListNode* push(ListNode* head,int item){
	ListNode* temp=create(item);
	if(head==NULL)
		return temp;
	else{
		ListNode* t=head;
		while(t->next!=NULL)
			t=t->next;
		t->next=temp;
		return head;
	}
}
ListNode* pop(ListNode* head,int item){
	ListNode* temp = head;
	if(temp->val == item)
		return temp->next;
	else{
		while(temp->next->next!=NULL){
			if(temp->val == item){
				temp->next=temp->next->next;	
			}
			temp=temp->next;
		}
	}
	return head;
}
void minmax(ListNode* head){
	ListNode* t=head;
	int min = t->val;
	int max = t->val;
	t=t->next;
	while(t!=NULL){
		if(t->val > max){
			max = t->val;
		}
		if(t->val < min){
			min = t->val;
		}
		t=t->next;
	}
	cout<<min*max;
}
