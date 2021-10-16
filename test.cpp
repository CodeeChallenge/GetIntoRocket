#include <bits/stdc++.h>

using namespace std;

class SinglyLinkedListNode {
    public:
        int data;
        SinglyLinkedListNode *next;

        SinglyLinkedListNode(int node_data) {
            this->data = node_data;
            this->next = nullptr;
        }
};

class SinglyLinkedList {
    public:
        SinglyLinkedListNode *head;
        SinglyLinkedListNode *tail;

        SinglyLinkedList() {
            this->head = nullptr;
            this->tail = nullptr;
        }

        void insert_node(int node_data) {
            SinglyLinkedListNode* node = new SinglyLinkedListNode(node_data);

            if (!this->head) {
                this->head = node;
            } else {
                this->tail->next = node;
            }

            this->tail = node;
        }
};

void print_singly_linked_list(SinglyLinkedListNode* node) {
    while (node) {
        cout << node->data;
        node = node->next;
        if (node) {
            cout << " ";
        }
    }
}

void free_singly_linked_list(SinglyLinkedListNode* node) {
    while (node) {
        SinglyLinkedListNode* temp = node;
        node = node->next;

        free(temp);
    }
}
// Complete the mergeLists function below.
/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* mergeLists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
    if(!head1)
        return head2;
    if(!head2)
        return head1;
    SinglyLinkedListNode* head = nullptr, *trav;    
    if(head2->data > head1->data){
        trav = head1;
        head1 = head1->next;
    }  
    else{
        trav = head2;  
        head2 = head2->next; 
    }
    head = trav;
    while(head1 && head2){
        if(head1->data <= head2->data){
            trav->next = head1;
            trav = head1;    
            head1 = head1->next;
        }
        else{
            trav->next = head2;
            trav = head2;    
            head2 = head2->next;
        }
    }
    if(!head1)
        trav->next = head2;
    if(!head2)
        trav->next = head1;
    return head;
}
int main()
{
    int tests;
    cin >> tests;
    for (int tests_itr = 0; tests_itr < tests; tests_itr++) {
        SinglyLinkedList* llist1 = new SinglyLinkedList();

        int llist1_count;
        cin >> llist1_count;
        for (int i = 0; i < llist1_count; i++) {
            int llist1_item;
            cin >> llist1_item;
            llist1->insert_node(llist1_item);
        }
      
        SinglyLinkedList* llist2 = new SinglyLinkedList();
        int llist2_count;
        cin >> llist2_count;
        for (int i = 0; i < llist2_count; i++) {
            int llist2_item;
            cin >> llist2_item;
            llist2->insert_node(llist2_item);
        }
        SinglyLinkedListNode* llist3 = mergeLists(llist1->head, llist2->head);
        print_singly_linked_list(llist3);
        free_singly_linked_list(llist3);
    }
    return 0;
}
