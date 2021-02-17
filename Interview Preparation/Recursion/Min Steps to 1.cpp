#include <bits/stdc++.h>
using namespace std;


int set1(int n,int count,int t)
{
    if(n==1) return count;
    if(n%3==0)
    {
        return set1(n/3,count+1,t);

    }
    else
    {
        if(n%2==0)
    	{
            int x=t,y=t; 
            if((n-1)%3==0)
            {
                 x=set1(n-1,count+1,t);
            //    cout<<x<<endl;
            }
    	    y=set1(n/2,count+1,t);
           // cout<<y<<endl;
            if(x<y) return x;
            return y;
    	}
        else
        {
            int x=t,y=t;
            if((n-2)%3==0)
            {
                x=set1(n-2,count+2,t);
            //    cout<<x<<endl;
            }
             y=set1(n-1,count+1,t);
           // cout<<y<<endl;
            if(x<y) return x;
            return y;
        }
    }
    
}
int countStepsToOne(int n)
{
    int count=0;
    return set1(n,count,n);
}

int main()
{
	int n;
	cin >> n;
	cout << countStepsToOne(n);
}
