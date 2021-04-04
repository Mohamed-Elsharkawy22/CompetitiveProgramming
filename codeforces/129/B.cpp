#include <bits/stdc++.h>
using namespace std;

/*
/*const int N=10000;

int vis[N],vid;
vector<int>adj[N];
int  qsz;
int dis[N];int par[N];
struct node{
    int u,d,p;

}q[N];
int bfs(int n,int snk)
{
    vid++;
   qsz=0;
    q[qsz++]={n,0,-1};
    vis[n]=vid;
   int lvl=0;

    for(int k=0;k<qsz;k++)
    {
            int u=q[k].u;
            if(u==snk) return k;
            k++;
            dis[u]=lvl;
            for(int v:adj[u])
            {
                if(vis[v]==vid) continue;
          q[qsz++]={v,q[k].d+1,k};
           vis[v]=vid;

            }

    }
    return  -1;
}

void print(int k)
{
    if(k==-1)return;
    print(q[k].p);
    cout<<q[k].u<<' ';
}
*/
int out[202];
int mat[202][202];
bool arr[202];
int main()
{
memset(arr,0,sizeof arr);
    int n,e;cin>>n>>e;
    for(int i=0;i<e;i++)
    {
        int u,v;cin>>u>>v;
        out[u]++;
        out[v]++;
        mat[u][v]=mat[v][u]=1;

    }
int cnt=0;
    while(1)
    {
        bool fd=1;

        for(int i=1;i<=n;i++)
        {
            if(out[i]==1)
            { fd=0;
                out[i]--;
                arr[i]=1;
            }
        }

        for(int i=1;i<=n;i++)
        {
            if(arr[i])
            {
                for(int j=1;j<=n;j++)
                    if(mat[i][j]==1){
                        out[j]--;

                    }
            }
            arr[i]=0;
        }

if (!fd)cnt++;
        if(fd)break;
    }
cout<<cnt<<endl;
return 0;
}
