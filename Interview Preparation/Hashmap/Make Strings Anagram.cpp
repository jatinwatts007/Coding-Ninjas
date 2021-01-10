#include<bits/stdc++.h>
int makeAnagram(char str1[], char str2[]){
	/* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input and printing output is handled automatically.
     */
    int count=0;
    unordered_map<char,int>mp1;
    unordered_map<char,int>mp2;
    for(int i=0;i<strlen(str1);i++)
    {
        mp1[str1[i]]++;
    }
    for(int i=0;i<strlen(str2);i++)
    {
        mp2[str2[i]]++;
    }
    
    for(int i=0;i<strlen(str1);i++)
    {
        if(mp1.count(str1[i]) && mp2.count(str1[i]))
        {
        	count = count + abs(mp1[str1[i]]-mp2[str1[i]]);
        	mp1.erase(str1[i]);
        	mp2.erase(str1[i]);
        }
        if(mp1.count(str1[i]))
        {
            count = count + abs(mp1[str1[i]]);
            mp1.erase(str1[i]);
        }
        
    }
    for(int i=0;i<strlen(str2);i++)
    {
        if(mp2.count(str2[i])){
          count = count + mp2[str2[i]];
            mp2.erase(str2[i]);
        }
    }
    
        
    
    
     return count;
}
