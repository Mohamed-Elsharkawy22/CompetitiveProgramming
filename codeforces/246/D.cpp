#include <bits/stdc++.h>
using namespace std;

const int N=100009;

set <int>adj[N];
int color[N];
int main()
{
   int n,m;cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        cin>>color[i];

    }
for(int i=0;i<m;i++) {

int u,v;cin>>u>>v;
    if(color[u]!=color[v])
    {
        adj[color[u]].insert(color[v]);
        adj[color[v]].insert(color[u]);
    }
}
int mnv=-1,ans=0;

    for(int i=1;i<=n;i++)
    {
        if(  (int)adj[color[i]].size()  > mnv || (int)adj[color[i]].size() == mnv && color[i] < color[ans] )
        {
            mnv = adj[color[i]].size();
            ans = i;
        }
    }

cout<<color[ans]<<endl;

return 0;
}
