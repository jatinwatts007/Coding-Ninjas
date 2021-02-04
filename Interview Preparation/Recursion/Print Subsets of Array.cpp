#include <iostream>
using namespace std;


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
        cout<<input[0]<<" ";
        for(int j=1;j<=output[i][0];j++)
        {
         	//output[count+i][j+1]=output[i][j]; 
            cout<<output[i][j]<<" ";
        }
        cout<<endl;
    }
    count*=2;
    
}

void printSubsetsOfArray(int input[], int size) {
    int output[350000][20];
    output[0][0]=0;
    set(input,size,output);
    
}


int main() {
  int input[1000],length;
  cin >> length;
  for(int i=0; i < length; i++)
  	cin >> input[i];
  printSubsetsOfArray(input, length);
}
