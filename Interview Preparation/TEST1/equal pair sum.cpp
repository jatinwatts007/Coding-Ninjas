#include <cmath>
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

bool findPairs(int arr[], int n) {
	/* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input and printing output is handled automatically.
     */
    map<int,int>mp;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            mp[arr[i]+arr[j]]++;
            if(mp[arr[i]+arr[j]]>1) return true;
        }
    }
    return false;
     
     
}
