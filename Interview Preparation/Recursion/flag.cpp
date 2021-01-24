long long count=0;
void c(int N,int counter,int m,int n)
{
    if(counter==N)
    {
        count++;
        return;
    }
    
    
    
    
    if(counter==N-1)
    {
		if(m==2 && n==1)
         c(N,counter+1,3,m);
        if(m==2 && n==3)
         c(N,counter+1,1,m);
        if(m==1)
         c(N,counter+1,3,m);
        if(m==3)
          c(N,counter+1,1,m);
    }
    if(counter<N-1)
    {
        if(m==2)
        {
        	if(n==3)
        	c(N,counter+1,1,m);
        	if(n==1)
        	c(N,counter+1,3,m);
        
    	}
    	if(m==1)
    	{
    	    c(N,counter+1,2,m);
    	    c(N,counter+1,3,m);
    	}
    	if(m==3)
    	{
    	    c(N,counter+1,1,m);
    	    c(N,counter+1,2,m);
   		}
    }
    
    
}
long long find_Ways(int N)
{
    /* Don't write main().
   * Don't read input, it is passed as function argument.
   * Taking input and printing output is handled automatically.
  */
    c(N,1,1,0);
    
   //long long m = c(N,1,3,0);
   // long long m = c(N,0,3);
    return count*2;

}
