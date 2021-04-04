
#include <bits/stdc++.h>
using namespace std;
typedef long long ll ;
const int N=1000003;
int mx=0;
int n;
vector<pair<int,int>>adj[N];
void dfs(int node ,int p,int d){

    if(d > mx){
        mx=d;
    }
    for(pair<int,int>v:adj[node]){
        if(v.first==p) continue;
        dfs(v.first,node,d+v.second);

    }
}



void setIO(string name) {
//    freopen((name+".in").c_str(),"r",stdin);
//    freopen((name+".out").c_str(),"w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
}




int main(){
setIO("g");


cin>>n;
ll cost=0;
for(int i=0;i<n-1;i++){
    int a,b,c;cin>>a>>b>>c;
    a--,b--;
    adj[a].emplace_back(b,c);
    adj[b].emplace_back(a,c);
    cost+=2*c;
}
dfs(0,-1,0);
cout<<cost-mx<<endl;
    return 0;
}

