/***
You need to save all the subsets in the given 2D output array. And return the number of subsets(i.e. number of rows filled in output) from the given function.

In ith row of output array, 1st column contains length of the ith subset. And from 1st column actual subset follows.
For eg. Input : {1, 2}, then output should contain 
	{{0}, 		// Length of this subset is 0
	{1, 2},		// Length of this subset is 1
	{1, 1},		// Length of this subset is also 1
	{2, 1, 2}}	// Length of this subset is 2

Don’t print the subsets, just save them in output.
***/
int k=1;
int &count=k;
void set(int input[],int n,int output[][20])
{
    if(n==0)
    {
        return;
    }
    set(input+1,n-1,output);
    for(int i=0;i<count;i++)
    {
        output[count+i][0]=output[i][0]+1;
        output[count+i][1]=input[0];
        for(int j=1;j<=output[i][0];j++)
        {
         	output[count+i][j+1]=output[i][j];  
        }
    }
    count*=2;
    
}


int subset(int input[], int n, int output[][20]) {
    // Write your code here
	output[0][0]=0;
     set(input,n,output);
    return count;
}
