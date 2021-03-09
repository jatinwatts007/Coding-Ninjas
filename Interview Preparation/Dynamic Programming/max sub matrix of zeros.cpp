int findMaxSquareWithAllZeros(int **arr, int n, int m)
{
    int ** dp =  new int * [n];
    for(int i=0;i<n;i++)
    {
        dp[i] = new int [m];
        
    }
    
    for(int i=0;i<m;i++)
    {
        if(arr[0][i]==1)
        dp[0][i]=0;
        else dp[0][i]=1;
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i][0]==1)
        dp[i][0]=0;
        else dp[i][0]=1;
    }
    int max=0;
    for(int i=1;i<n;i++)
    {
        for(int j=1;j<m;j++)
        {
            if(arr[i][j]==1)
            {
                dp[i][j]=0;
                continue;
            }
            dp[i][j]=min(dp[i-1][j-1],min(dp[i][j-1],dp[i-1][j]))+1;
            if(dp[i][j]>max) max=dp[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        delete [] dp [i];
    }
    delete [] dp;
    return max;
	//Write your code here
}
