#include <string.h>
using namespace std;

int inter(string in , int x , int y, int z , string out[],int &count,int &count1, string s="")
{
    if(y>z)
    {
        if(count%2==0)
        {
            out[count1]=s;
            count1++;
        }
        
        count++;
        return count;
    }
    if(y==z && x==2){
        return count;
    }
    if(x==1)
    {
        int l = in[y]-'0';
        char c = 97+l-1;
        s=s+c;
        y=y+1;
    }
    if(x==2)
    {
        int n = in[y]-'0';
        int b = in[y+1]-'0';
        int m = n*10 + b;
        if(m>26)
        {
            return count;
        }else{
            y=y+2;
            char c = 97+m-1;
            s=s+c;
        }
    }
    inter(in,1,y,z,out,count,count1,s);
    
    inter(in,2,y,z,out,count,count1,s);
}
int getCodes(string input, string output[10000]) {
    /*
    You are given the input text and output string array. Find all possible codes and store in the output string array. Don’t print the codes.
    Also, return the number of codes return to the output string. You do not need to print anything.
    */
    int count =0;
    int count1 =0;
     inter(input,0,0,input.size()-1,output,count,count1);
    return count1;
}


