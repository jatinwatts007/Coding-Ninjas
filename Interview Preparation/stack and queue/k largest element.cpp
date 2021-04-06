#include<bits/stdc++.h>
int kthLargest(int* arr, int n, int k) {
    // Write your code here
    sort(arr,arr+n);
    return arr[n-k];
}
