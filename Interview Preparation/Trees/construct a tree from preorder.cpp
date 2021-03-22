/***********************************************************
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

BinaryTreeNode<int>* buildTree(int *p, int x, int *in, int y) 
{
    BinaryTreeNode<int>* arr [x];
    BinaryTreeNode<int>* temp = new BinaryTreeNode<int> (-1);
    int max = 0;
    int count,count1;
    for(int i=0;i<x;i++)
    {
        if(p[i]>max) max = p[i];
    }
    max++;
    
    
    for(int i=0;i<x;i++)
    {
        arr[i] = new BinaryTreeNode<int> (max);
        
    }
    for(int i=0;i<x;i++)
    {
        if(p[0]==in[i])
        {
            count = i;
            break;
        }
    }
    
    arr[count]->data = in[count];
    for(int i=1;i<x;i++)
    {
        for(int j=0;j<count;j++)
        {
            int l=0;
           if(p[i]==in[j])
           {
               for(int k=j+1;k<=count;k++)
               {
                   if(arr[k]->data!=max)
                   {
                       if(arr[k]->left==NULL)
                       {
                           arr[j]->data = in[j];
                           arr[k]->left = arr[j];
                           l++;
                           break;
                       }
                   }
               }
               if(l==0)
               {
                 for(int k=j-1;k>=0;k--)
               		{
               	   		if(arr[k]->data!=max)
               	    	{
               	    	    if(arr[k]->right==NULL)
               	    	    {
               	    	        arr[j]->data = in[j];
               	    	        arr[k]->right = arr[j];
                                break;
               	    	    }
               	    	} 
               		}  
               }
               
           }
        }
    }
    
    
    
    for(int i=1;i<x;i++)
    {
        for(int j=count+1;j<x;j++)
        {
            int l=0;
           if(p[i]==in[j])
           {
               int k;
               for( k=j+1;k<x;k++)
               {
                   if(arr[k]->data!=max)
                   {
                       if(arr[k]->left==NULL)
                       {
                           arr[j]->data = in[j];
                           arr[k]->left = arr[j];
                           l++;
                           break;
                       }
                   }
               }
               if(l==0)
               {
                 for(int k=j-1;k>=count;k--)
               		{
               	   		if(arr[k]->data!=max)
               	    	{
               	    	    if(arr[k]->right==NULL)
               	    	    {
               	    	        arr[j]->data = in[j];
               	    	        arr[k]->right = arr[j];
                                break;
               	    	    }
               	    	} 
               		}  
               }
               
           }
        }
    }
    
    return arr[count];
    // Write your code here
}
