#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int n,a,b,c;
int dp[5000];
int solve(int m)
{

    if(m==0 )
        return 0;

int &ret=dp[m];
if(~ret) return ret;

ret=INT_MIN;

if(m-a>=0)
    ret=max(ret,1+solve(m-a));

if(m-b>=0)
    ret=max(ret,1+solve(m-b));

if(m-c>=0)
ret=max(ret,1+solve(m-c));

return ret;
}




int main()
{
memset(dp,-1,sizeof dp);
  cin>>n>>a>>b>>c;

cout<<solve(n)<<endl;


    return 0;
}
