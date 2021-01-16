 	
bool subArrayZeroSum(int arr[], int n) {
		
	/* Don't write main().
     	* the input array is already passed as function argument.
     	* Taking input and printing output is handled automatically. Return only true or false.
     	*/
    for(int i=0;i<n-1;i++)
    {
        int sum=arr[i];
        for(int j=i+1;j<n;j++){
            sum=sum+arr[j];
            if(sum==0)
            {
                return true;
            }
        }
    }
    
    return false;
            
     	
}

