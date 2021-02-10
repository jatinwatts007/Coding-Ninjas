void sum(int arr[],int n,int out[],int size,int k)
{
    if(k<0) return;
    if(k==0)
    {
        for(int i=0;i<size;i++)
        {
            cout<<out[i]<<" ";
        }
        cout<<endl;
        return;
    }
    if(n==0)
    {
        return;
    }
    int *newout = new int [size+1];
    for(int i=0;i<size;i++)
    {
        newout[i]=out[i];
    }
    newout[size]=arr[0];
    sum(arr+1,n-1,newout,size+1,k-arr[0]);
    delete [] newout;
    sum(arr+1,n-1,out,size,k);
}

void printSubsetSumToK(int input[], int size, int k) {
    // Write your code here
    int *out = new int [size];
    sum(input,size,out,0,k);
    delete [] out;
}
