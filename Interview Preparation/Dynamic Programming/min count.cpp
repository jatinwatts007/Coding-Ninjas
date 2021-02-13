int min(int n)
{
    if(n==0) return 0;
    if(n==1) return 1;
    int k=sqrt(n)+1;
    int * arr = new int [k];
    arr[1]=n;
    int min1 = arr[1];
    for(int i=2;i<k;i++)
    {
        arr[i]=n/(i*i)+min(n%(i*i));
        if(arr[i]<min1)min1=arr[i];
    }
    return min1;
}

int minCount(int n)
{
    int k=sqrt(n)+1;
    int * arr = new int [k];
    arr[1]=n;
    int min1 = arr[1];
    for(int i=2;i<k;i++)
    {
        arr[i]=n/(i*i)+min(n%(i*i));
        if(arr[i]<min1)min1=arr[i];
    }
    return min1;
	//Write your code here
}
