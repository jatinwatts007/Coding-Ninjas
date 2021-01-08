#include<bits/stdc++.h>
using namespace std;
int highestFrequency(int arr[], int n) {
    int count=0;
    int j;
    map<int,int> mp;
    for(int i=0;i<n;i++)
    {
        mp[arr[i]]++;
    }
    for(auto i=mp.begin();i!=mp.end();i++)
    {
        cout<<i->first<<" ";
    }
    return 0;
    // Write your code here
}
