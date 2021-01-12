void wavePrint(int **arr, int r, int c)
{
    int m=0,n=1;
    for(int i=0;i<c;i++)
    {
        if(i%2==0){
        	for(int i=0;i<r;i++)
        	{
        	    cout<<arr[i][m]<<" ";
        	}
            m=m+2;
        }else{
            for(int i=r-1;i>=0;i--)
        	{
        	    cout<<arr[i][n]<<" ";
        	}
            n=n+2;
        }
    }
    //Write your code here
}
