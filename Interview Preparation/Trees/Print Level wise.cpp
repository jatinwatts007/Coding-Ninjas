/************************************************************
 
    Following is the structure for the TreeNode class

    template <typename T>
    class TreeNode {
     public:
        T data;
        vector<TreeNode<T>*> children;
    
        TreeNode(T data) {
            this->data = data;
        }
    
        ~TreeNode() {
            for (int i = 0; i < children.size(); i++) {
                delete children[i];
            }
        }
    };

************************************************************/

void printLevelWise(TreeNode<int>* root) {
    // Write your code here
    if(root==NULL) return ;
    queue<TreeNode<int> *> q;
    q.push(root);
    while(!q.empty())
    {
        cout<<q.front()->data<<':';
        for(int i=0;i<(q.front()->children).size();i++)
        {
            cout<<(q.front()->children)[i]->data;
            if(i!=(q.front()->children).size()-1)cout<<',';
            q.push((q.front()->children)[i]);
        }
        cout<<endl;
        q.pop();
    }
}























/**********************************************************

	Following is the Binary Tree Node class structure

	template <typename T>
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

***********************************************************/

void printLevelWise(BinaryTreeNode<int> *root) {
	// Write your code here
    if(root==NULL) return;
    queue<BinaryTreeNode<int>*> q;
    q.push(root);
    while(!q.empty())
    {
        cout<<q.front()->data<<":";
        if(q.front()->left!=NULL)
        {
            cout<<"L:"<<q.front()->left->data<<',';
            q.push(q.front()->left);
        }
        else{
            cout<<"L:"<<-1<<',';
        }
        if(q.front()->right!=NULL)
        {
            cout<<"R:"<<q.front()->right->data;
            q.push(q.front()->right);
        }
        else{
            cout<<"R:"<<-1;
        }
        cout<<endl;
        q.pop();
    }
}
