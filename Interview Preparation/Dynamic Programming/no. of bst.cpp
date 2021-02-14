int mod=1000000007;
long long int bst(int * arr,int n)
{
    if(n==1) return 1;
    if(n==0) return 1;
    if(arr[n]>0) return arr[n];
	for(int i=2;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            arr[i]=(arr[i]%mod+((bst(arr,j-1)%mod)*(bst(arr,i-j)%mod))%mod)%mod;
        }
    }
    return arr[n];
}


int countBST( int n)
{
  /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input and printing output is handled automatically.
     */
     int * arr = new  int [n+1];
    arr[0]=0;
    arr[1]=1;
    return bst(arr,n);

}


