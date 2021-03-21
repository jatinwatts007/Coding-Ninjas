/************************************************************

    Following is the Binary Tree node structure

    template <typename T>
    class BinaryTreeNode
    {
        public :
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data)
        {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
#include<bits/stdc++.h>
using namespace std;
bool isNodePresent(BinaryTreeNode<int> *root, int x) {
    // Write your code here
    if(root==NULL) return false;
    queue<BinaryTreeNode<int>*> q;
    q.push(root);
    while(!q.empty())
    {
        if(q.front()->data==x) return true;
        if(q.front()->left!=NULL)
        	q.push(q.front()->left);
        if(q.front()->right!=NULL)
        	q.push(q.front()->right);
    	q.pop();
        
    }
    
    return false;
}
