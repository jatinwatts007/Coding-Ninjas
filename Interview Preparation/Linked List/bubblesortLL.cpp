/****************************************************************
 
    Following is the class structure of the Node class:

        class Node
        {
        public:
	        int data;
	        Node *next;
	        Node(int data)
	        {
		        this->data = data;
		        this->next = NULL;
	        }
        };

*****************************************************************/

Node *bubbleSort(Node *head)
{
    if(head==NULL || head->next==NULL) return head;
    Node * temp = head;
    Node * t;
    Node * n;
    while(temp->next!=NULL)
    {
        t=head;
        while(t->next!=NULL)
        {
            if(t->data>t->next->data)
            {
                int x = t->data;
                t->data = t->next->data;
                t->next->data = x;
            }
          //  if(t->next->next==NULL) n=t;
            t=t->next;
        }
      //  n->next=NULL;
        temp=temp->next;
    }
    return head;
	// Write your code here
}
