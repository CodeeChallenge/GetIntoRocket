ListNode* removeZero(ListNode* head) {
    ListNode* Head = new ListNode(0);
    Head->next=head;
    ListNode cur=Head;
    while(cur)
        {
            int sum=0;
            while(head!=null)
            {
                sum+=head->val;
                if(sum==0)
                {
                   cur->next=head->next; 
                }
                head=head->next;
            }
            cur=cur.next;
            if(cur!=null)
            {
                head=cur->next;
            }
        }
        return Head->next; 
    }


-----------------

SinglyLinkedListNode* mergeLists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
    if(!head1)
        return head2;
    if(!head2)
        return head1;
    SinglyLinkedListNode* head, *trav;    
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
        if(head1->data > head2->data){
            trav->next = head1;
            trav = head1;    
            head1 = head1->next;
        }
        else{
            trav->next = head2;
            trav = trav->next; // trav = head1   
            head2 = head2->next;
        }
    }
    if(!head1)
        trav->next = head2;
    if(!head2)
        trav->next = head1;
    return head;
}

--------------------------------    