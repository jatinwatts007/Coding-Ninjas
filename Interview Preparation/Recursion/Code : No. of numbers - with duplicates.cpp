#include <vector>
using namespace std ;
long num(vector<int> &v,int n,int *fact,int *freq)
{
    if(n==0 || n==1) return 0;
    long double ans = 0;
    long double ans1 = 1;
    for(int i=0;i<9;i++)
    {
        if(freq[i]>0)
        ans1*=fact[freq[i]];
    }
   // cout<<ans1<<" ";
    for(int i=1;i<v.size();i++)
    {
        if(v[i]>v[0])
        if(freq[v[i]]>0)
        {
            ans=ans+(fact[n-1]/ans1);
        }
    }
 //   cout<<ans<<" ";
    freq[v[0]]--;
    v.erase(v.begin());
    ans+=num(v,v.size(),fact,freq);
    return ans;
    
    
}
long numberOfNumbersWithDuplicates(long num1){
	// Write your code here
    vector <int> v;
    long s = num1;
    while(s!=0)
    {
        v.insert(v.begin(),s%10);
        s=s/10;
    }
	int * fact = new int [v.size()+1];
    int  freq[10] = {0};
    fact[0] = 1;
    for(int i=0;i<v.size();i++)
    {
        freq[v[i]]++;
        fact[i+1] = (i+1)*fact[i];
    }
    
    return num(v,v.size(),fact,freq);

}
