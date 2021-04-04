#include <bits/stdc++.h>
using namespace std;
 
long long solve (long long  a,long long  b,long long x,long long y,long long n)
{
 
    int z=a-x;
    if(z <= n)
    {
        a -= z;
        n -= z;
    } else{
 
        a-=n;
        n=0;
    }
    int z2=b-y;
    if(z2<=n)
    {
        b -= z2;
        n -= z2;
    }else
    {
        b-=n;
        n=0;
    }
 
   return 1ll*a*b;
 
 
}
 
 
 
 
int main()
{
 
    int t;cin>>t;
    while(t--) {
 
        long long a, b, x, y, n;
        cin>>a>>b>>x>>y>>n;
 
        cout<<min(solve(a,b,x,y,n),solve(b,a,y,x,n))<<endl;
 
    }
 
    return 0;
}
