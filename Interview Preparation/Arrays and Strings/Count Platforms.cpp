#include<bits/stdc++.h>
int platformsNeeded(int arr1[], int arr2[], int n) {
    /*
     * Don't write main().
     * Don't read input, it is passed as function argument.
     * Don't print anyt
     */
    int count=1;
    int m,temp;
    
    sort(arr1,arr1+n);
    sort(arr2,arr2+n);
    int j=0;
    for(int i=1;i<n;i++)
    {
        if(arr2[j]>=arr1[i]){
            count++;
        }else{
            j++;
        }
    }
    
    return count;
    
}
