int getMin(int *arr, int n)
{
    int * a = new int [n];
    for(int i=0;i<n;i++)
    {
        a[i]=1;  
    }
    
    for(int i=1;i<n;i++)
    {
        for(int j=i;j>=1;j--)
        {
            if(arr[j]<arr[j-1]) a[j-1]=a[j]+1;
            if(arr[j]>arr[j-1]){
                if(a[j]<=a[j-1])
                a[j]=a[j-1]+1;
                break;
            }
           if(arr[j]==arr[j-1]) break;
        }
    }
    int sum=0;
    for(int i=0;i<n;i++)
    {
       // cout<<a[i]<<" ";
        sum+=a[i];
    }
    return sum;
	//Write your code here
}
