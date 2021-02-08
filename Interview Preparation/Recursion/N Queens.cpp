void queen(int arr[10][10],int n,int x)

{
    
    if(x==n-1)
    {
        int sum=0;
        for(int i=0;i<n;i++) sum=sum+arr[x][i];
        if(sum==0) return;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cout<<arr[i][j]<<" ";
            }
        }
        cout<<endl;
        return;
    }
	for(int k=0;k<n;k++)
    {
        int arr1[10][10];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                arr1[i][j]=arr[i][j];
            }
        }
        
        if(arr1[x][k]==0) continue;
        for(int i=0;i<n;i++)
	    {
           // if(arr[i][y]==1) return;
	        if(i==x) continue;
	        arr1[i][k]=0;
	    }
	    for(int i=0;i<n;i++)
	    {
           // if(arr[x][i]==1) return;

	        if(i==k) continue;
	        arr1[x][i]=0;
	    }
	    int i1=x;
	    int j1=k;
	    while(i1<n && j1<n)
	    {
          //  if(arr[i1][j1]==1) return;
	        if(i1==x && j1==k)
	        {
	            i1++;
	            j1++;
	            continue;
	        }
	        arr1[i1][j1]=0;
	        i1++;
	        j1++;
	    }
		 i1=x;
	     j1=k;
	    while(i1>=0&& j1>=0)
	    {
          //  if(arr[i1][j1]==1) return;
	        if(i1==x && j1==k)
	        {
	            i1--;
	            j1--;
	            continue;
	        }
	        arr1[i1][j1]=0;
	        i1--;
	        j1--;
	    }
        i1=x;
	     j1=k;
	    while(i1>=0 && j1<n)
	    {
	        if(i1==x && j1==k)
	        {
	            i1--;
	            j1++;
	            continue;
	        }
	        arr1[i1][j1]=0;
	        i1--;
	        j1++;
	    }
        i1=x;
	     j1=k;
	    while(i1<n && j1>=0)
	    {
	        if(i1==x && j1==k)
	        {
	            i1++;
	            j1--;
	            continue;
	        }
	        arr1[i1][j1]=0;
	        i1++;
	        j1--;
	    }
        
	    queen(arr1,n,x+1);
	}
   // return;
}
void placeNQueens(int n)
{
    int arr[10][10];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            arr[i][j]=1;
           // cout<<arr[i][j]<<" ";
        }
    }
	
	queen(arr,n,0);
  /* Don't write main().
   *  Don't read input, it is passed as function argument.
   *  Print output as specified in the question
  */


}
