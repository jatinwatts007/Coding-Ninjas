void lr(int &a,int &b,int &c,int &d,int **arr,int &j)
{
    for(int i=b;i<c;i++)
    {
       cout<<arr[a][i]<<" ";
      //  cout<<j<<" ";
        j--;
    }
    a++;
}

void td(int &a,int &b,int &c,int &d,int **arr,int &j)
{
    for(int i=a;i<d;i++)
    {
        cout<<arr[i][c-1]<<" ";

        j--;
    }
    c--;
    
}

void rl(int &a,int &b,int &c,int &d,int **arr,int &j)
{
    for(int i=c-1;i>=b;i--)
    {
      cout<<arr[d-1][i]<<" ";
        j--;
    }
    d--;
}

void dt(int &a,int &b,int &c,int &d,int **arr,int &j)
{
    for(int i=d-1;i>=a;i--)
    {
        cout<<arr[i][b]<<" ";
        j--;
    }
    b++;
}


void spiralPrint(int **input, int nRows, int nCols)
{
    int r=nRows;
    int co =nCols;
    int m=0,k;
    int j=r*co;
 	int a=0,b=0,c=co,d=r;
    if(c>r)k=c;
    else k=r;
    if(k%2==1)m=1;
    for(int i=0;i<k/2+m;i++){
        if(j==0){break;}
        lr(a,b,c,d,input,j);
        if(j==0){break;}
        td(a,b,c,d,input,j);
        if(j==0){break;}
        rl(a,b,c,d,input,j);
        if(j==0){break;}
        dt(a,b,c,d,input,j);
    }
        
    	
    
    
    //Write your code here
}
