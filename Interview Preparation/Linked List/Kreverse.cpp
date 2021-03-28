node* kReverse(node*head,int n)
{
   int count=0;
    node* temp=head;
    node* prev;
    node* next;
    
    while(temp!=0){
        temp=temp->next;
        count++;
    }
    if(n>count){
        temp=head;
        prev=0;
        for(int i=0;i<count;i++){
            next=temp->next;
            temp->next=prev;
            prev=temp;
            temp=next;   
        }
        head=prev;
        return head;  
    }
    else{
        int k=count/n;
        int m=count%n;
        node* finalhead;
        
        prev=0;
        temp=head;
        node* temphead;
        node* extra;
        for(int i=0;i<k;i++){
            temphead=temp;
            prev=0;
            for(int j=0;j<n;j++){
                next=temp->next;
                temp->next=prev;
                prev=temp;
                if(i>0 && j==n-1)
                    extra->next=temp;
                temp=next;
            }
            if(i==0){
                finalhead=prev;
            }
            extra=temphead;
            
        }
        
        if(m>0){
            prev=0;
            for(int i=0;i<m;i++){
                next=temp->next;
                temp->next=prev;
                prev=temp;
                if(i==m-1)
                    extra->next=temp;
                temp=next;  
        }
        }
    
       return finalhead; 
        
    }
    
}
