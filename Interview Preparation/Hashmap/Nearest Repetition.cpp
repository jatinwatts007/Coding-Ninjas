#include <cmath>
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int minDistance(int arr[],int n){
    unordered_map<int,vector<int>> mp;
    vector<int> v1;
    for(int i=0;i<n;i++)
    {
        mp[arr[i]].push_back(i);
    }
	/* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input and printing output is handled automatically.
     */
   // v1=mp.begin()->second;

    int small=INT_MAX;
    for(auto i=mp.begin();i!=mp.end();i++)
    {
        //cout<<i->first<<" ";
        v1=i->second;
       /* for(int x=0;x<v1.size();x++){
            cout<<v1[x];
        }
        cout<<endl;*/
       	if(v1.size()==1) continue; 
        for(int v=0;v<v1.size()-1;v++)
        {
            
            if(v1[v+1]-v1[v]<small)
            {
                small=v1[v+1]-v1[v];
            }
        }
    }
    return small;
}
