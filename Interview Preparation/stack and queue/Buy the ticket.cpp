#include<bits/stdc++.h>
int buyTicket(int *arr, int n, int k) {
    // Write your code here
    queue<int>q;
    int count=0;
    vector<int> v;
    int ans=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>arr[k])
        {
            v.push_back(arr[i]);
            count++;
        }
        q.push(arr[i]);
    }
    int pos = k+1;
    while(count!=0)
    {
        if(q.front()<=arr[k])
        {
            q.push(q.front());
            q.pop();
            pos--;
        }else{
            for(auto i = v.begin();i!=v.end();i++)
            {
                if(*i>q.front())
                {
                   	q.push(q.front());
            		q.pop();
            		pos--;
                    if(pos==0)
        			{
            			pos=q.size();
        			}
                    continue;
                }
            }
            for(auto i = v.begin();i!=v.end();i++)
            {
                if(*i==q.front())
                {
                   	q.pop();
            		pos--;
            		ans++;
            		count--;
                    v.erase(i);
                    break;
                }
            }
            
        }
        if(pos==0)
        {
            pos=q.size();
        }
        
    }
    while(pos!=0)
    {
        if(q.front()<arr[k])
        {
            q.push(q.front());
            q.pop();
            pos--;
        }else{
            q.pop();
        	pos--;
        	ans++;
        }
        
    }
    return ans;
    
}
