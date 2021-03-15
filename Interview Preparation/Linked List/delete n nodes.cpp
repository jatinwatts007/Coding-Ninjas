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

Node *skipMdeleteN(Node *head, int M, int N)
{
    Node * temp = head;
    if(M==0) return NULL;
    int i=1;
    int j=1;
    while(temp!=NULL)
    {
        if(i==M)
        {
            Node *del  = temp->next;
            for(int k=0;k<N;k++)
            {
                if(del==NULL)
                {
                    j++;
                    break;
                }
                del=del->next;
            }
            temp->next = del;
            i=0;
        }
        if(j==2)
        {
        	temp->next=NULL;
            break;
        }
            
        temp=temp->next;
        i++;
        
    }
    return head;
	// Write your code here
}
