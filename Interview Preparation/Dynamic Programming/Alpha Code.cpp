#include<bits/stdc++.h>
using namespace std;

int num_codes(int * arr ,int size,int *dp){
    if(size==1 || size ==0) return 0;
    if(dp[size]!=0) return dp[size];
    int output = num_code(arr, size-1);
    if(arr[size-2]*10+arr[size-1]<=26)
        output+=num_codes(arr,size-2);
    dp[size]=output;
    return output;
}
int main(){
    int n;
    cin>>n;
    int * arr = new int[n];
    int * dp = new int[n+1];
    for(int i=0;i<=n;i++){
        if(i!=n){
            cin>>arr[i];
        }
        dp[i]=-1;
    }
    cout<<num_codes(arr,n,dp);
    return 0;
}
