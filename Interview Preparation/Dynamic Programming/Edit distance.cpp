
int edhelper(string s1,string s2,int m,int n,int ** dp,int i,int j)
{
    if(s1[i]=='\0') return n;
    if(s2[j]=='\0') return m;
    if(dp[m][n]>-1) return dp[m][n];
    int ans;
    if(s1[i]==s2[j])
    {
        ans=edhelper(s1,s2,m-1,n-1,dp,i+1,j+1);
    }else{
        int op1 = 1+edhelper(s1,s2,m-1,n-1,dp,i+1,j+1);
        int op2 = 1+edhelper(s1,s2,m-1,n,dp,i+1,j);
        int op3 = 1+edhelper(s1,s2,m,n-1,dp,i,j+1);
        ans=min(op1,min(op2,op3));
    }
    dp[m][n]=ans;
    return ans;
}





int editDistance(string s1, string s2)
{
    int m=s1.length();
    int n=s2.length();
    int ** arr = new int *[m+1];
    for(int i=0;i<=m;i++)
    {
        arr[i] = new int[n+1];
        for(int j=0;j<=n;j++)
        {
            arr[i][j]=-1;
        }
    }
   return edhelper(s1,s2,m,n,arr,0,0); 
	//Write your code here
}
