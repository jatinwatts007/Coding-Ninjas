/**********
 * Following is the Node class that is already written.
 
class Node{
public:
    int data;
    Node *next;
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};
 
*********/
Node *reverseLinkedList(Node *head) {
    // Write your code here
    if(head==NULL || head->next==NULL) return head;
    Node * temp = head->next;
    Node * note=head;
    Node *t;
    while(temp->next!=NULL)
    {
        Node * n = temp->next;
        t = temp;
        temp->next=note;
        note=t;
        temp=n;
    }
    temp->next = note;
    head->next = NULL;
    return temp;
    
}
Node* NextLargeNumber(Node *head) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input is handled automatically.
     */
    head = reverseLinkedList(head);
    Node * temp = head;
    int carry=1;
    while(temp->next!=NULL)
    {
        if(temp->data+carry==10)
        {
          temp->data=0;
        }else{
            temp->data = temp->data+carry;
            carry=0;
        }
        if(carry==0) break;
        temp=temp->next;
    }
    if(temp->data+carry==10)
        {
          	temp->data=0;
        	Node * n = new Node(1);
        	temp->next=n;
        }else{
            temp->data = temp->data+carry;
        }
    head = reverseLinkedList(head);
    return head;
    
}


