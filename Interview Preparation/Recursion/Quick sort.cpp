
int partiation(int arr[],int si,int ei)
{
    
    int count = si;
	for(int i=si+1;i<=ei;i++)
    {
        if(arr[i]<arr[si])
        {
            count++;
        }
    }
    
    //swap(&arr[0],&arr[count]);
    int t = arr[count];  
    arr[count] = arr[si];  
    arr[si] = t; 
    
    int j=si,k=ei;
    while(j!=count && k!=count)
    {
        if(arr[j]>=arr[count] && arr[k]<arr[count])
        {
            //swap(&arr[j],&arr[k]);
            int t = arr[j];  
    		arr[j] = arr[k];  
    		arr[k] = t;
            j++;
            k--;
        }
            else
            {
            	if(arr[j]<arr[count]) j++;
        		if(arr[k]>=arr[count]) k--;
        	}

            
        
        		
    }
    return count;
    
}



void quickSort1(int arr[],int si,int ei)
{
    if(si>=ei) return;
    int x= partiation(arr,si,ei);
    quickSort1(arr,si,x-1);
    quickSort1(arr,x+1,ei);
}

void quickSort(int arr[], int size) {
  /* Don't write main().
     Don't read input, it is passed as function argument.
     Change in the given array itself.
     Taking input and printing output is handled automatically.
  */
    quickSort1(arr,0,size-1);

}
