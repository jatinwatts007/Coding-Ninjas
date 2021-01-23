#include<bits/stdc++.h>
int maximumProfit(int arr[], int n) {
    // Write your code here
	sort(arr,arr+n);
    int k=n;
    int max=0;
    for(int i=0;i<n;i++)
    {
        if(k*arr[i]>max)
        {
            max=k*arr[i];
        }
        k--;
    }
    return max;
}
