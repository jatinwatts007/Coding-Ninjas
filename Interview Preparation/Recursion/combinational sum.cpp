
#include<bits/stdc++.h>
using namespace std;
void removeD(vector<int>& vec)
{
	sort(vec.begin(), vec.end());
	vec.erase(unique(vec.begin(), vec.end()), vec.end());
}

void sum1(vector<vector<int>>&v,vector<int>&v1,vector<int> &arr,int sum,int size,int i=0)
{
    if(size==i)
    {
    	if(sum==0)
    	{
    	    v.push_back(v1);
    	    return;
    	}
        return;
    }
    if(sum<0) return;
    if(sum==0)
    {
        v.push_back(v1);
        return;
    }
	v1.push_back(arr[i]);
    sum1(v,v1,arr,sum-arr[i],size,i);
    v1.pop_back();
    sum1(v,v1,arr,sum,size,i+1);
}




vector<vector<int> > combinationSum(vector<int>& arr, int sum){
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input and printing output is handled automatically.
     */
	removeD(arr);
    vector<vector<int>> v;
    vector<int>v1;
    sum1(v,v1,arr,sum,arr.size());
    return v;

}


