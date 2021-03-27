#include <bits/stdc++.h>
#include <iostream>
using namespace std;
    
int main() {
    /* Write Your Code Here
    * You have to take input and print the output yourself
    */
    long long n,l;
    cin>>n>>l;
    long long count =0;
    
    long long* A = new long long[n+1];
    for(long long i=1;i<n+1;i++){
        cin>>A[i];
    }
    
    long long* arr = new long long[n+1];
    for(long long i=2;i<n+1;i++){
        cin>>arr[i];
    }
    
    vector<long long>* v = new vector<long long>[n+1];
    
    for(long long i=n;i>0;i--){
        v[arr[i]].push_back(A[i]);
        
    }
    
    for(long long i=n;i>0;i--){
    	for(long long j=0;j<v[i].size();j++){
            v[arr[i]].push_back(v[i][j]);
        }
    }

    for(long long i=1;i<n+1;i++){
        long long val = A[i];
        for(long long j=0;j<v[i].size();j++){
            for(long long k=j+1;k<v[i].size();k++){
                if(val+v[i][k]+v[i][j]>=l){
                    count++;
                }
            }
        }
    }
    cout<<count<<endl;
    
    return 0;
}


