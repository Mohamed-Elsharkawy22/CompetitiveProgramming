#include <bits/stdc++.h>
using namespace std;
/*
 * WATCHOUT!!
 * length of the path can be 10^11 (long long)
 */
typedef long long ll ;
const int N=100005;
int n,m;
vector<pair<int,ll > >adj[N];
ll dis[N];
int par[N];
ll dijkstra(int src,int snk) {
    priority_queue<pair<ll, int>> q;
    fill(dis,dis+n,1e12);
    q.push({0, src});
    dis[src]=0;
    par[src] = -1;
    while (!q.empty()) {
        int u = q.top().second;
        ll d = -q.top().first;
        q.pop();
        if(u==snk) return dis[snk] ;
        if (d > dis[u]) continue;         //lazy deletion
        for (auto e : adj[u]) {
            int v = e.first;
            ll c = e.second;
           ll nd = dis[u] + c;
            if (nd < dis[v]) {
                dis[v] = nd;
                par[v] = u;
                q.push({-nd, v});
            }
        }

    }
    return dis[snk];
}
void printt(int u){
    if(u ==-1) return ;
    printt(par[u]);
    cout<<u+1<<" ";
}




int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cin>>n>>m;
    for(int i=0;i<m;i++){
        int f,t,c;
        cin>>f>>t>>c;
        --f,--t;
        adj[f].emplace_back(t,c);
        adj[t].emplace_back(f,c);
    }

    ;
    if(dijkstra(0,n-1) == 1e12) {
        cout<<-1<<endl;
    } else{
        printt(n-1);}

    return 0;
}