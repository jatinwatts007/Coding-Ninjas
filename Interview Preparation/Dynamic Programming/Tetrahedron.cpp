#define mod 1000000007
 int dp[5][10000040]  ;
long long solve(int n)
{
    dp[1][1]=0;
     dp[2][1]=0;
     dp[3][1]=0;
      dp[4][1]=1;
        for(int i=2;i<=n;i++)
         {
             dp[1][i]=((dp[2][i-1]+dp[3][i-1])%mod+dp[4][i-1])%mod;
              dp[2][i]=((dp[3][i-1]+dp[4][i-1])%mod+dp[1][i-1])%mod;
               dp[3][i]=((dp[1][i-1]+dp[2][i-1])%mod+dp[4][i-1])%mod;
               dp[4][i]= ((dp[2][i-1]+dp[3][i-1])%mod+dp[1][i-1])%mod;
              
         }
         
          return ((dp[1][n]+dp[2][n])%mod+dp[3][n])%mod;
	// Write your code here.
}
