#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int max = 1;
    cin>>n;
    int * nums = new int[n];
    int * dp = new int[n];
    for(int i=1;i<n;i++){
        cin>>nums[i];
        dp[i]=1;
    }
    for(int i=0;i<n;i++){
        for(int j=i-1;j>=0;j--){
            if(nums[j]<nums[i]){
                int count = 1+dp[j];
                if(dp[i]<count){
                    dp[i]=count;
                    if(count>max) max=count;
                }
            }
        }
    }
    if(dp[n-1]>max) max = dp[n-1];
    cout<<max<<endl;
    return 0;
}
