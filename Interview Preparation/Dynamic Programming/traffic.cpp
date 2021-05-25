#include<bits/stdc++.h>
using namespace std;
int getMin(bool* visited,int* weight,int n)
{
	int ans=INT_MAX;
	int index=-1;
	for(int i=0;i<n;i++){
		if(!visited[i] && weight[i]<ans)
		{
			ans=weight[i];
			index=i;	
		}
	}
	return index;	
}
void traffic(int** arr,int n,int* time,bool* visited,int* weight,int src,int dest)
{
	weight[src]=0;
	for(int i=0;i<n;i++)
	{
		int minIndex=getMin(visited,weight,n);
		for(int j=0;j<n;j++)
		{
			
			if(arr[minIndex][j]!=0 && !visited[j])
			{
				if(minIndex==src)
				{
					if(weight[minIndex]+arr[minIndex][j]<weight[j])
						weight[j]=weight[minIndex]+arr[minIndex][j];
				}
				else
				{
					int ans=0;
					if(weight[minIndex]%time[minIndex]!=0)
						ans+=time[minIndex]-(weight[minIndex]%time[minIndex]);
					//cout<<"Time"<<ans<<" ";
					if((weight[minIndex]+arr[minIndex][j]+ans)<weight[j])
						weight[j]=weight[minIndex]+arr[minIndex][j]+ans;
				}
			}
		}
		// cout<<minIndex<<" ";
		// for(int i=0;i<n;i++)
		// 	cout<<weight[i]<<" ";
		// cout<<endl;
		visited[minIndex]=true;
		if(visited[dest])
			break;
	}
}
int main()
{
	int n,e;
	cin>>n>>e;
	int **arr=new int*[n];
	for(int i=0;i<n;i++)
	{
		arr[i]=new int[n];
		for(int j=0;j<n;j++)
			arr[i][j]=0;
	}
	int *time=new int[n];
	for(int i=0;i<n;i++)
		cin>>time[i];
		
	for(int i=0;i<e;i++)
	{
		int start,end,weight;
		cin>>start>>end>>weight;
		arr[start-1][end-1]=weight;
		arr[end-1][start-1]=weight;
	}
	
	bool *visited=new bool[n];
	int* weight=new int [n];
	for(int i=0;i<n;i++)
	{
		visited[i]=false;
		weight[i]=INT_MAX;
	}
	int source,dest;
	cin>>source >>dest;
	traffic(arr,n,time,visited,weight,source-1,dest-1);
	cout<<weight[dest-1]<<endl;	
}
