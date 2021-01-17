void pushZeroesEnd(int *arr, int n)
{
    int j=0;
    for(int i=0;i<n;i++)
    {
        if(arr[j]!=0)
        {
            j++;
        }
        if(arr[i]!=0 && arr[j]==0 && j<i)
        {
            arr[j]=arr[i];
            arr[i]=0;
            j++;
        }
    }
    //Write your code here
}
