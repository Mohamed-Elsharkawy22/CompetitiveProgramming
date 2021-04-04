#include <bits/stdc++.h>
using namespace std;
const int N=5e3+6;
int vis[N];
int main()
{
int t;cin>>t;
while(t--)
{
bool fd=0;
int n,x;cin>>n;
for(int i=1;i<=n;i++)
    vis[i]=0;


for(int i=1;i<=n;i++)
{
    cin>>x;
    if(vis[x]==0)
        vis[x]=i;
    else
        if(i-vis[x]>1)
          fd=1;
}
if(!fd)
cout<<"NO"<<"\n";
else
    cout<<"YES"<<"\n";}


return 0;
  }

