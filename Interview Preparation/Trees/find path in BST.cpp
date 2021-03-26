/**********************************************************

	Following is the Binary Tree Node class structure

	template <typename T>
	class BinaryTreeNode {
    	public: 
    	T data;
    	BinaryTreeNode<T> *left;
    	BinaryTreeNode<T> *right;

    	BinaryTreeNode(T data) {
        	this->data = data;
        	left = NULL;
        	right = NULL;
    	}
	};

***********************************************************/

vector<int>* getPath(BinaryTreeNode<int> *root , int data) {
	// Write your code here
    if(root==NULL)
    {
         vector<int> * v= new vector<int>;
        return v;
    }
    if(root->data==data)
    {
        vector<int> * v= new vector<int>;
        v->push_back(root->data);
        return v;
    }
    if(root->data>data)
    {
        vector<int> * v1 = getPath(root->left,data);
        if(v1->size()==0) return v1;
        v1->push_back(root->data);
        return v1;
    }
	if(root->data<data)
    {
        vector<int> * v1 = getPath(root->right,data);
        if(v1->size()==0) return v1;
        v1->push_back(root->data);
        return v1;
    } 
}
