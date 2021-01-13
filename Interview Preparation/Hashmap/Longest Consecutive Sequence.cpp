#include<bits/stdc++.h>
vector<int> longestConsecutiveIncreasingSequence(int *arr, int n) {
    unordered_map<int,int> mp;
    vector<int> v;
    int j=1,m;
    for(int i=0;i<n;i++){
        mp[arr[i]]++;
    }
    for(int i=0;i<n;i++)
    {
        int k=1;
        int m=arr[i];
        while(true){
            ++m;
            if(mp.count(m)){
                k++;
            }else{
                break;
            }
        }
        if(k>j){
            v.clear();
            v.push_back(arr[i]);
            m--;
            v.push_back(m);
            j=k;
        }
    }
    
    return v;
    // Your Code goes here
}
