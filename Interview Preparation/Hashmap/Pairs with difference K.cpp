#include<bits/stdc++.h>
int getPairsWithDifferenceK(int *arr, int n, int k) {
	// Write your code here
    unordered_map<int,int> mp;
    int count=0;
    for(int i=0;i<n;i++)
    {
       mp[arr[i]]++; 
    }
    for(auto i=mp.begin();i!=mp.end();i++)
    {
        if(i->first-i->first==k)
        {
            for(int j=0;j<(mp[i->first])*(mp[i->first-1])/2;j++)
                {
                    count++;
                }
            break;
        }
        if((i->first)>k && mp.count((i->first)-k)){
            for(int j=0;j<mp[(i->first)-k];j++)
            {
                count++;
            }
            if(mp.count((i->first)+k))
           		mp.erase((i->first)-k);
            else {
                mp.erase(i->first);
            	mp.erase((i->first)-k);
            }
            
        }
        if((i->first)<=k && mp.count((i->first)+k)){
            for(int j=0;j<mp[(i->first)+k];j++)
            {
                count++;
            }
            mp.erase(i->first);
            
        }
        
        
    }
    return count;
}
