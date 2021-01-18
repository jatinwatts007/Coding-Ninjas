#include<bits/stdc++.h>
void traverse(map<int,queue<int>> &mp, int c, BinaryTreeNode<int>* root)
{
    if(root==NULL) return;
   // if(root->left==NULL) return;
    // if(root->right==NULL) return;
    mp[c].push(root->data);
    
    traverse(mp,c-1,root->left);
    
    traverse(mp,c+1,root->right);
}
void printBinaryTreeVerticalOrder(BinaryTreeNode<int>* root) {	 
		
	// Following is the structure of the Binary Tree node class
	/*
		class BinaryTreeNode {
	    		public :
    				T data;
    			BinaryTreeNode<T> *left;
    			BinaryTreeNode<T> *right;

			BinaryTreeNode(T data) {
	        		this -> data = data;
        			left = NULL;
        			right = NULL;
    			}
		};
	*/
	
	/* Don't write main().
     	* the root of the input binary tree is already passed as function argument.
     	* Taking input is handled automatically.
	* Print the binary tree in vertical order. Don't return anything.
     	*/
     	map<int,queue<int>> mp;
    	int c=0;
    	traverse(mp,c,root);
    	for(auto it = mp.begin();it!=mp.end();it++)
        {
            while(!it->second.empty())
            {
                cout<<it->second.front()<<" ";
                it->second.pop();
                
            }
            cout<<endl;
        }
	

     	
     	
 	}
