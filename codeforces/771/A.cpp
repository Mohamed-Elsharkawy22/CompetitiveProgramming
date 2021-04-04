#include <bits/stdc++.h>
using namespace std;
const int N=200000+8;
vector<int>adj[N];
int vis[N];
int cntn=0,cnte=0;
void dfs(int src)
{
    vis[src]=1;
    cntn++;
    for(int v : adj[src])
    {  cnte++;
        if(vis[v])continue;
        vis[v]=1;
        dfs(v);
    }


}





int main()
{
int n,e;cin>>n>>e;
for(int i=0;i<e;i++)
{
    int a,b;cin>>a>>b;
    a--,--b;
    adj[a].push_back(b);
    adj[b].push_back(a);
}

for(int i=0;i<n;i++)
{
    if(vis[i])continue;
   cntn=0,cnte=0;
   dfs(i);
   if(cnte!= 1ll*cntn*(cntn-1))
   {
       cout<<"NO\n";
       return 0;
   }
}

cout<<"YES\n";
    return 0;
}