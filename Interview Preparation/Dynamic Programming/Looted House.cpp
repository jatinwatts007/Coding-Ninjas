int maxMoneyLooted(int *arr, int n)
{
    int * arr1 = new int [n];
    arr1[0]=arr[0];
    arr1[1]=arr[1];
    for(int i=2;i<n;i++)
    {
        int best=0;
        for(int j =i-2;j>=0;j--)
        {
            if(arr1[j]+arr[i]>best) best=arr1[j]+arr[i];
        }
        arr1[i]=best;
    }
    int best=0;
    for(int i=0;i<n;i++)
    {
        if(arr1[i]>best)best=arr1[i];
    }
    return best;
	//Write your code here
}
