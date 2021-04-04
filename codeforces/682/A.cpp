#include <bits/stdc++.h>
using namespace std;
int main()
{

 cin.sync_with_stdio(false);
    cin.tie(NULL);
int n,m;cin>>n>>m;
int d=n/5,k=m/5;
long long  ans=0;
ans+=(long long)d*k*5;
n%=5;
m%=5;

ans+=(long long)(n*k+m*d);

for(int i=1;i<=n;i++)
{
    for(int j=1;j<=m;j++)
    {
        ans+=(i+j)%5==0?1:0;
    }
}
cout<<ans;


    return 0 ;
}
