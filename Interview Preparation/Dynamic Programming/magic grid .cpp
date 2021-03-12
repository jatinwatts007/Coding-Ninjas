int getMinimumStrength(int** grid, int n, int m) {
    int ** dp = new int *[n];
    for(int i=0;i<n;i++)
    {
        dp[i] = new int [m];
    }
    dp[n-1][m-1]=1;
    dp[n-2][m-1]=1;
    dp[n-1][m-2]=1;
	// Write your code here
    for(int i=m-3;i>=0;i--)
    {
        dp[n-1][i]=dp[n-1][i+1]-grid[n-1][i+1];
    }
    for(int i=n-3;i>=0;i--)
    {
        dp[i][m-1] = dp[i+1][m-1]-grid[i+1][m-1];
    }
    for(int i=n-2;i>=0;i--)
    {
        for(int j=m-2;j>=0;j--)
        {
            int x=dp[i][j+1]-grid[i][j+1];
            int y = dp[i+1][j]-grid[i+1][j];
            if(x<=0)dp[i][j]=1;
            else if(y<=0)dp[i][j]=1;
            else dp[i][j]=min(x,y);
        }
    }
    int ans =  dp[0][0];
    for(int i=0;i<n;i++)
    {
        delete [] dp[i];
    }
    delete [] dp;
    return ans;
}
