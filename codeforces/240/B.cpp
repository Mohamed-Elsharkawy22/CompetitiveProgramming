#include <bits/stdc++.h>
using namespace  std;
int n ,r,g;
int arr[201];

int dp[201][2][40001];
int solve(int i ,int rr,int rg,int last)
{

             int &ret=dp[i][last][rr];
            if(~ret) return ret;
    if(i==n)return 0;
ret=1e9;
if(i==0)
{
    if (rr>=arr[i]) ret=solve(i+1,rr-arr[i],rg,0);
    if(rg>=arr[i]) ret=min(ret,solve(i+1,rr,rg-arr[i],1));
    return ret;
}
if(last==1)
{
    if(rg>=arr[i]) ret=solve(i+1,rr,rg-arr[i],1) ;
    if (rr>=arr[i]) ret=min(ret,solve(i+1,rr-arr[i],rg,0)+min(arr[i],arr[i-1]));
    return ret;
}
    if(rg>=arr[i]) ret=solve(i+1,rr,rg-arr[i],1)+min(arr[i],arr[i-1]) ;
    if (rr>=arr[i]) ret=min(ret,solve(i+1,rr-arr[i],rg,0));
    return ret;


}

int main()
{
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
    cin>>n;
    cin>>r>>g;
for(int i=0;i<n;i++)
{
    cin>>arr[i];
}
memset(dp,-1,sizeof(dp)) ;

int res=solve(0,r,g,0);

if(res>=1e9)cout<<-1<<endl;
else
    cout<<res<<endl;

    return 0;
}