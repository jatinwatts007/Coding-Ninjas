// Following is the given Tree node structure
/**************

class TreeNode {
	TreeNode<T>** children;
	int childCount;

	public:
	T data;

	TreeNode(T data);	// Constructor
	int numChildren();
	void addChild(TreeNode<T>* child);
	TreeNode<T>* getChild(int index);
	void setChild(int index, TreeNode<T>* child);
};

***************/
#include<bits/stdc++.h>
TreeNode <int>* secondLargest(TreeNode<int> *root) {
    // Write your code here
    if(root==NULL) return 0;
    queue<TreeNode<int> *> q;
    q.push(root);
    int max;
    max=q.front()->data;
    while(!q.empty())
    {
        int y = q.front()->numChildren();
        for(int i=0;i<y;i++)
        {
            TreeNode<int>* temp = q.front()->getChild(i);
            if(max<temp->data)
            {
                max=temp->data;
            }
            //if(i!=(q.front()->children).size()-1)cout<<',';
            q.push(temp);
        }
       // cout<<endl;
        q.pop();
    }
    // TreeNode<int> * max1 = new TreeNode<int>(max);
    
    //queue<TreeNode<int> *> q1;
    q.push(root);
    int max1;
    max1=INT_MIN;
    while(!q.empty())
    {
        int y = q.front()->numChildren();
        for(int i=0;i<y;i++)
        {
            TreeNode<int>* temp = q.front()->getChild(i);
            if(temp->data!=max && max1<temp->data)
            {
                max1=temp->data;
            }
            //if(i!=(q.front()->children).size()-1)cout<<',';
            q.push(temp);
        }
       // cout<<endl;
        q.pop();
    }
    
    TreeNode<int> * max2 = new TreeNode<int>(max1);
    return max2;

}

