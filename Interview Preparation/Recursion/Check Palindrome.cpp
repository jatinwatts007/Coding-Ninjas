#include<bits/stdc++.h>
bool check(char input[], int x,int y)
{
    if(input[x]!=input[y]) return false;
    if(x>=y) return true;
    check(input,x+1,y-1);
}
bool checkPalindrome(char input[]) {
    // Write your code here
	return check(input,0,strlen(input)-1);
}
#include <iostream>
#include "solution.h"
using namespace std;

int main() {
    char input[50];
    cin >> input;
    
    if(checkPalindrome(input)) {
        cout << "true" << endl;
    }
    else {
        cout << "false" << endl;
    }
}
