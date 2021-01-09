

#include<bits/stdc++.h>
int max(int arr[], int n) {
    int j;
    unordered_map<int,int> mp;
    for(int i=0;i<n;i++)
    {
        mp[arr[i]]++;
    }
	/* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input and printing output is handled automatically.
     */
   // cout<<mp[0]<<" "<<mp[1]<<" ";
    if(mp[0]>mp[1]) j=mp[1];
    
    if(mp[1]>mp[0]) j=mp[0];
    if(mp[1]==mp[0]) return n;
    if(mp[0]==n || mp[1]==n) return 0;
    int m=j*2;
    int l=abs(mp[0]-mp[1]);
    int sum;
    while(m>2)
    {
    	for(int i=0;i<=l;i++)
    	{
            sum=0;
        	for(int k=i;k<m+i;k++)
            {
                sum=sum+arr[k];
            }
            if(m==sum*2){
                return sum*2;
            }
    	}
        m=m-2;
        l=l+2;
    }
    
    return 2;
}
