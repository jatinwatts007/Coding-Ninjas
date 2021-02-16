int coin(int n,int x,int y,int *dp)
{
    for(int i=2;i<n+1;i++)
    {
        if(i-x>=0 && i-y>=0)
        {
            dp[i]=(dp[i-1]^1 || dp[i-x]^1 || dp[i-y]^1);
            continue;
        }
        if(i-x>=0)
        {
            dp[i]=(dp[i-1]^1 || dp[i-x]^1);
            continue;
        }
        if(i-y>=0)
        {
            dp[i]=(dp[i-1]^1 || dp[i-y]^1);
            continue;
        }
        dp[i]=dp[i-1]^1;
    }
    return dp[n];
    
    
}



string findWinner(int n, int x, int y)
{
    int * dp = new int [n+1];
    dp[1]=1;
    dp[x]=1;
    dp[y]=1;
    int x1 = coin(n,x,y,dp);
    if(x1==0) return "Whis";
    return "Beerus";
    
	// Write your code here .
}
