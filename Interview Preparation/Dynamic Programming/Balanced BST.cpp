int mod = 1000000007;
long long int bal(int * arr,int h)
{
    if(h==0||h==1) return 1;
    if(arr[h]>0) return arr[h];
     int output  = (bal(arr,h - 1) * ((2 * bal(arr,h - 2))%mod + bal(arr,h-1))%mod) % mod;
    arr[h] = output;
    return output;
}
int balancedBTs(int n) {
    // Write your code here
    int * arr = new int [n+1];
    arr[0]=0;
    return bal(arr,n);
}
