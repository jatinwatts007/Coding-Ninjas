#include<iostream>
#include "Solution.h"
using namespace std;

int value(int input[], int size, int x, int output[],int n,int v)
{
    if(n==size) return v;
    if(input[n]==x){
        output[v]=n;
        v++;
    }
    n++;
    value(input,size,x,output,n,v);
}
int allIndexes(int input[], int size, int x, int output[]) {
  /* Don't write main().
     Don't read input, it is passed as function argument.
     Save all the indexes in the output array passed and return the size of output array.
     Taking input and printing output is handled automatically.
  */
    return value(input,size,x,output,0,0);

}


int main(){
    int n;
    cin >> n;
  
    int *input = new int[n];
    
    for(int i = 0; i < n; i++) {
        cin >> input[i];
    }
    
    int x;
    
    cin >> x;
    
    int *output = new int[n];
    
    int size = allIndexes(input, n, x, output);
    for(int i = 0; i < size; i++) {
        cout << output[i] << " ";
    }
    
    delete [] input;
    
    delete [] output;
    

}
