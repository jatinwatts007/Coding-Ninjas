#include <string>
using namespace std;
int keypad(int n, string output[]){
    /* Insert all the possible combinations of the integer number into the output string array. You do not need to
    print anything, just return the number of strings inserted into the array.
    */
    if(n==0){
        output[0]="";
        return 1;
    }
    int size = keypad(n/10,output);
    
    if(n%10==0 || n%10==1){
        return 0;
    }
    if(n%10==7 || n%10==9)
    {
        int f=0;
        if(n%10==9) f=1;
        for(int j=1;j<4;j++){
        	for(int i=0;i<size+j;i++)
        	{
        	    output[i+j*size] = output[i];
        	}
        }
    	for(int j=0;j<4;j++)
        {
        	for( int i=j*size;i<(j+1)*size;i++)
        	{
                char c=(97+(((n%10)-2)*3)+j+f);
        	    output[i]= output[i]+c ;
        	}
        }
        return 4*size;
    }else{
        int f=0;
        if(n%10==8) f=1;
        for(int j=1;j<3;j++){
        	for(int i=0;i<size+j;i++)
        	{
        	    output[i+j*size] = output[i];
        	}
        }
        for(int j=0;j<3;j++)
        {
        	for( int i=j*size;i<(j+1)*size;i++)
        	{
                char c=(97+(((n%10)-2)*3)+j+f);
        	    output[i]= output[i]+c ;
        	}
        }
        return 3*size;
    }
    
    
}
