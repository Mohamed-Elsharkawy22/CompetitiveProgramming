#include <bits/stdc++.h>
using namespace std;
typedef long long ll ;
const ll N=200006;
vector<int>adj[N];
int dis[N];
int sz[N];
int cst[N];
void dfs(int n,int p){
   sz[n]=0;
   cst[n]=dis[n];
    for(int v:adj[n]){
        if(v==p)continue;
        sz[n]++;
        dfs(v,n);
        cst[n] += dis[v];}

}

int main(){

    int n;cin>>n;
    int root;
    for(int i=0;i<n;i++){
        int a;cin>>a>>dis[i];
        a--;
        if(a==-2){root=i;
            continue;
        }
        adj[i].push_back(a);
        adj[a].push_back(i);
    }
    dfs(root,-1);

bool fd=1;
    for(int i=0;i<n;i++){
        if(sz[i]+1==cst[i]){
            fd=0;
            cout<<i+1<<" ";
        }
    }
    if(fd){
        cout<<-1<<endl;
    }
    return 0;
}

