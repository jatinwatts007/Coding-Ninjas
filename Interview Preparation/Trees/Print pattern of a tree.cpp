

/*
template<typename T>
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
#include<bits/stdc++.h>
void print( vector<BinaryTreeNode<int>*> v)
{
    if(v.empty()) return;
    vector<BinaryTreeNode<int>*> v1;
    int i = 0;
    int j = v.size()-1;
    while(i<j)
    {
        if(v[i]->left!=NULL)
            cout<<v[i]->left->data<<" ";
        if(v[j]->right!=NULL)
            cout<<v[j]->right->data<<" ";
        if(v[i]->right!=NULL)
            cout<<v[i]->right->data<<" ";
        if(v[j]->left!=NULL)
            cout<<v[j]->left->data<<" ";
        i++;
        j--;
    }
    if(i==j) 
    {
        if(v[i]->left!=NULL)
            cout<<v[i]->left->data<<" ";
        if(v[j]->right!=NULL)
            cout<<v[i]->right->data<<" ";
    }
    for(int i=0;i<v.size();i++)
    {
        if(v[i]->left!=NULL)
            v1.push_back(v[i]->left);
        if(v[i]->right!=NULL)
            v1.push_back(v[i]->right);
    }
    print(v1);
    
}
void printSpecificPattern(BinaryTreeNode<int> * root)
{
     /* Write your code here
      * Print the required pattern
      * Taking input is handled automatically
      */
    if(root==NULL) return;
    vector<BinaryTreeNode<int>*> v1;
    cout<<root->data<<" ";
    v1.push_back(root);
    print(v1);
}
