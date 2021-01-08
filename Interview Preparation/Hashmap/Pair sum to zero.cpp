
#include<bits/stdc++.h>
int pairSum(int *arr, int n) {
    unordered_map<int,int> mp;
    int count=0;
    for(int i=0;i<n;i++)
    {
        mp[arr[i]]++;
    }
    for(int i=0;i<n;i++)
    {
        if(mp[0]>0)
    {
        count=count+(mp[0]*(mp[0]-1))/2;
        mp[0]=0;
    }
        if(mp[arr[i]] && mp[-arr[i]])
        {
            count=count+mp[arr[i]]*mp[-arr[i]];
            mp[arr[i]]=0; mp[-arr[i]]=0;
        }
    }
    
    return count;
	// Write your code here
}
