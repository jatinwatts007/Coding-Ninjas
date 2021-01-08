#include<bits/stdc++.h>
void intersection(int *arr1, int *arr2, int n, int m) 
{
    unordered_map<int,int> mp1;
    unordered_map<int,int> mp2;
    map<int,int>mp;
    int a,d;
    for(int i=0;i<n;i++)
    {
        mp1[arr1[i]]++;
    }
    for(int i=0;i<m;i++)
    {
        mp2[arr2[i]]++;
    }
    int k;
    if(n>m)k=m;
    else k=n;
    for(int i=0;i<k;i++)
    {
        	if((mp1[arr1[i]]>=1 && mp2[arr1[i]]>=1) )
        	{
                if(mp1[arr1[i]]<mp2[arr1[i]])
                {
                    a=mp1[arr1[i]];
                }else{
                    a=mp2[arr1[i]];
                }
        	        mp[arr1[i]]=a;
        	    
        	    mp1[arr1[i]]=0;
        	    mp2[arr1[i]]=0;
        	}
        	if((mp1[arr2[i]]>=1 && mp2[arr2[i]]>=1))
        	{
                if(mp1[arr2[i]]<mp2[arr2[i]])
                {
                    d=mp1[arr2[i]];
                }else{
                    d=mp2[arr2[i]];
                }
        	        mp[arr2[i]]=d;;
        	    
        	    mp1[arr2[i]]=0;
        	    mp2[arr2[i]]=0;
        	}
        
    }
    
    for(auto i= mp.begin();i!=mp.end();i++)
    {
        for(int j=0;j<i->second;j++)
        {
            cout<<i->first<<" ";
        }
    }
}
    //Write your code here
