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

vector<int>* leaf(BinaryTreeNode<int>*root)
{
    if(root==NULL)
    {
        vector<int>* v = new vector<int>;
        //v->push_back(root->data);
        return v;
    }
    vector<int>* v1 = new vector<int>;
	vector<int>* v2 = new vector<int>;
    v1 = leaf(root->left);
    v1->push_back(root->data);
    v2 = leaf(root->right);
    v2->push_back(root->data);
    if(v1->size()>v2->size())
        return v1;
     return v2;
    
}


vector<int>* longestPath(BinaryTreeNode<int>* root) {
	// Write your code here
    vector<int>* v =  new vector<int>;
    v = leaf(root);
	return v;
}
