/*************
 Following is the Node structure already written.

 template <typename T>
 class Node {
	public:
	T data;
	Node* next;
 
	Node(T data) {
 next = NULL;
 this->data = data;
	}
 
	~Node() {
 if (next != NULL) {
 delete next;
 }
	}
 };
 
*************/


Node<int>* moveToFront(Node<int> *head) {
	// Write your code here
    Node <int>* temp = head->next;
    int x=head->data;
    int last;
    while(temp!=NULL)
    {
        if(temp->next==NULL) last = temp->data;
        int i= x;
        x=temp->data;
        temp->data = i;
        
        temp=temp->next;
    }
    head->data = last;
    return head;
    
}
