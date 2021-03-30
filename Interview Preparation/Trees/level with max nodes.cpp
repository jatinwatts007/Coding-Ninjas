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
int ans=0;
//int count =0;
void level(queue<TreeNode<int>*> & q,int l,int count =0)
{
    if(q.empty()) return;
    if(q.size()>count)
    {
        count=q.size();
        ans = l;
    }
    
    queue<TreeNode<int>*> q1;
    while(!q.empty())
    {
        if(q.front()->numChildren()!=0)
        {
            for(int i=0;i<q.front()->numChildren();i++)
            {
                q1.push(q.front()->getChild(i));
            }
        }
        q.pop();
    }
    
    level(q1,l+1,count);
}
int maxLevel(TreeNode<int> *root){
    queue<TreeNode<int>*>q;
    q.push(root);
	/* Don't write main().
	   Don't read input, it is passed as function argument.
	   Return output and don't print it.
	   Taking input and printing output is handled automatically.
	*/
	level(q,0);
    return ans;
}
