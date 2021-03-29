#include<bits/stdc++.h>
vector<Node<int>*> constructLinkedListForEachLevel(BinaryTreeNode<int> *root) {
    // Write your code here
    vector<Node<int>*> v;
    queue<BinaryTreeNode<int>*>q1;
    queue<BinaryTreeNode<int>*>q2;
    if(root==NULL) return v;
    //q.push(root);
    Node<int> * head = new Node<int>(root->data);
    v.push_back(head);
    if(root->left!=NULL)
        q1.push(root->left);
    if(root->right!=NULL)
        q1.push(root->right);
    while(!q1.empty())
    {
        head = new Node<int>(q1.front()->data);
        if(q1.front()->left!=NULL)
        	q2.push(q1.front()->left);
    	if(q1.front()->right!=NULL)
        	q2.push(q1.front()->right);
        q1.pop();
		Node<int>* temp = head;
        while(!q1.empty())
        {
            Node<int>* temp1;
			temp1=new Node<int>(q1.front()->data);
            temp->next=temp1;
            temp=temp1;
            if(q1.front()->left!=NULL)
        	q2.push(q1.front()->left);
    		if(q1.front()->right!=NULL)
        	q2.push(q1.front()->right);
            q1.pop();
        }
        v.push_back(head);
        while(!q2.empty())
        {
            q1.push(q2.front());
            q2.pop();
        }
    }
    
    
    
   return v; 
}
