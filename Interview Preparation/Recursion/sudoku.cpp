#include<iostream>
using namespace std;
#include "Solution.h"


bool sudokuSolverHelper(int board[][9], int x, int y,int x1,int y1)
{
    if(y==9)
    {
        x=x+1;
        y=0;
        y1=2;
    }
    if(x==9) return true;
    if(y>y1)
    {
        y1=y1+3;
    }
    if(x>x1)
    {
        x1=x1+3;
    }
    
    if(board[x][y]!=0)
    {
       return sudokuSolverHelper(board,x,y+1,x1,y1);
    }
    int arr[10]={0};
    for(int i=0;i<9;i++)
    {
        if(board[x][i]>9) return false;
        arr[board[x][i]]++;
    }
    for(int i=0;i<9;i++)
    {
        if(board[i][y]>9) return false;
        arr[board[i][y]]++;
    }
    for(int i=x1-2;i<=x1;i++)
    {
        for(int j=y1-2;j<=y1;j++)
        {
            if(board[i][j]>9) return false;
            arr[board[i][j]]++;
        }
    }
    for(int i=1;i<10;i++)
    {
        if(arr[i]==0)
        {
            board[x][y] = i;
        	if(sudokuSolverHelper(board,x,y+1,x1,y1))
        	{
        	    return true;
        	}
        }
    }
    board[x][y]=0;
    return false; 
    
}
bool sudokuSolver(int board[][9]){

  /* Don't write main().
   *  Don't read input, it is passed as function argument.
   *  Don't print output and return output as specified in the question
  */
   return  sudokuSolverHelper(board,0,0,2,2);


}


int main(){

  int n = 9; 
  int board[9][9];
  for(int i = 0; i < n ;i++){
	for(int j = 0; j < n; j++){
        	cin >> board[i][j];
        }		
  }
  if(sudokuSolver(board)){
	cout << "true";	
  }else{
	cout << "false";	
  }
}
