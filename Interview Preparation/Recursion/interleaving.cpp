#include<bits/stdc++.h>
void inter(char *f, char *s,int f1,int s1,string r="")
{
    if(f1==strlen(f) && s1==strlen(s))
    {
        cout<<r<<endl;
        return;
    }
	if(f1<=strlen(f)-1)
    inter(f,s,f1+1,s1,r+f[f1]);
    if(s1<=strlen(s)-1)
    {
    	inter(f,s,f1,s1+1,r+s[s1]);
    }
	    
    
}

void interleaving(char* first, char* second) {
	// Write your code here
    inter(first,second,0,0);
    
    

}
