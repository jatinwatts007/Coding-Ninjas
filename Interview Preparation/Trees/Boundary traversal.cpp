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
void left(BinaryTreeNode<int>* root,vector<int> & v)
{
    if(root==NULL) return;
    if(root->left==NULL && root->right==NULL)
    {
        // v.push_back(root->data);
        return;
    }
    v.push_back(root->data);
    if(root->left!=NULL)
    left(root->left,v);
    else left(root->right,v);
}

void leaf(BinaryTreeNode<int>* root,vector<int> & v)
{
    if(root==NULL) return;
    if(root->left==NULL && root->right==NULL)
    {
         v.push_back(root->data);
        return;
    }
    leaf(root->left,v);
    leaf(root->right,v);
}



void right(BinaryTreeNode<int>* root,vector<int> & v)
{
   if(root==NULL) return;
    if(root->left==NULL && root->right==NULL)
    {
       // v.push_back(root->data);
        return;
    }
    v.push_back(root->data);
    if(root->right!=NULL)
    right(root->right,v);
    else right(root->left,v);
}



void solve(BinaryTreeNode<int>* root){
    	/* Don't write main().
	* Don't read input, it is passed as function argument.
    
	*/
    vector<int> v1;
    vector<int> v2;
    vector<int> v3;
    
    left(root->left,v1);
    leaf(root,v3);
    right(root->right,v2);
    cout<<root->data<<" ";
    for(int i=0;i<v1.size();i++)
    {
        cout<<v1[i]<<" ";
    }
    for(int i=0;i<v3.size();i++)
    {
        cout<<v3[i]<<" ";
    }
    for(int i=v2.size()-1;i>=0;i--)
    {
        cout<<v2[i]<<" ";
    }

}
