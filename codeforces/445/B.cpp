#include <bits/stdc++.h>
using namespace std;
typedef long long ll ;
const int N=55;
int vis[N], vid=0;
vector<int>adj[N];
int cnt=0;
void dfs(int n){
    cnt++;
    vis[n]=vid;
    for(int v:adj[n]){
        if(vis[v]==vid) continue;
        dfs(v);
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

int n,m;cin>>n>>m;
vid++;
for(int i=0;i<m;i++){
    int a,b;cin>>a>>b;
    adj[a].push_back(b);
    adj[b].push_back(a);
}
int cnt1=0;


    for (int i=1;i<=n;i++) {
        cnt=0;
       if(vis[i]!=vid) dfs(i);
        if(cnt>=1) cnt1 += cnt-1;

    }



cout<<(ll)pow(2,cnt1)<<endl;



    return 0;
}