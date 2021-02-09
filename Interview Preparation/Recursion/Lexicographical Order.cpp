#include <iostream>
using namespace std;

void order(int i,int n)
{
    if(i>n) return;
    cout<<i<<endl;
    for(int j=0;j<10;j++)
    {
        
        order(10*i+j,n);
    }
}

void lexicographicalOrder(int num){
	// Write your code here
    for(int i=1;i<=9;i++)
    {
        order(i,num);
    }

}
