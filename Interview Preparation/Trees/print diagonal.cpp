// Following is the Binary Tree node structure
/**************
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
***************/
#include<bits/stdc++.h>
void print(BinaryTreeNode<int> * root,map<int,vector<int>>&mp,int count)
{
    if(root==NULL) return;
    print(root->right,mp,count);
    mp[count].push_back(root->data);
    print(root->left,mp,count+1);
}
void PrintDiagonal(BinaryTreeNode<int>* root) {
	// Don't write main().
	// Write your code here.
    if(root==NULL) return;
    map<int,vector<int>> mp;
    print(root,mp,0);
    for(auto i = mp.begin();i!=mp.end();i++)
    {
        for(int j=i->second.size()-1;j>=0;j--)
        {
            cout<<i->second[j]<<" ";
        }
        cout<<endl;
    }
}
