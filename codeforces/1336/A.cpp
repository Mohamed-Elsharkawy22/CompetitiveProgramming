#include <bits/stdc++.h>
using namespace std;
typedef long long ll ;
const ll N=200006;
vector<int>adj[N];
int dis[N];
int sz[N];
int cst[N];
void dfs(int n,int p){
   sz[n]=1;
    for(int v:adj[n]){
        if(v==p)continue;
        dis[v] = dis[n]+1;
        dfs(v,n);
        sz[n]+=sz[v];


    }
    cst[n]=(-sz[n]+1)+dis[n];
}

int main(){

    int n,k;cin>>n>>k;
    for(int i=0;i<n-1;i++){
        int a,b;cin>>a>>b;
        a--,b--;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
dis[0]=0;
    dfs(0,-1);
    sort(cst,cst+n,[](int a,int b){
        return a>b;
    });

    ll sum=0;
    for(int i=0;i<k;i++){
        sum+=cst[i];
    }
    cout<<sum<<endl;
    return 0;
}

