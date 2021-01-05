#include <iostream>
#include "solution.h"
using namespace std;

int main() {
    char input[1000];
    cin.getline(input, 1000);
    reverseStringWordWise(input);
    cout << input << endl;
}


using namespace std;
void reverseStringWordWise(char input[]) {
    // Write your code here
    
    int k=0;
    char input1[1000];
    int n=strlen(input)-1,m=1;
    for(int i=strlen(input);i>=0;i--)
    {
        if(input[i]==' ' || i==0)
        {
            if(i==0)m=0; 
            for(int j=i+m;j<=n;j++)
            {
                 cout<<input[j] ;
            }
            if(i!=0){
            cout<<' ';
            }
            n=i-1;
            
        }
        
    }
	
    input[0]='\0';
    
}
