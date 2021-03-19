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
