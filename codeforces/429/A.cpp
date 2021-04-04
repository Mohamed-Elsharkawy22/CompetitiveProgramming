#include <bits/stdc++.h>
using namespace std;
typedef long long ll ;
const int N=300003;
ll gcd(ll x,ll y){return y==0?x:gcd(y,x%y);}
vector<int>arr;
vector<int>adj[N];
int val[N],goal[N];


void dfs(int node,int par, int eventimes,int oddtimes,int depth ){

    if(depth%2==0){
        val[node] ^= eventimes;

    }else{
        val[node] ^= oddtimes;
    }

    if(val[node] != goal[node]){
        arr.push_back(node);
        if(depth%2==0){
            eventimes^=1;
        }else
            oddtimes^=1;
    }
    for(int v:adj[node]){
        if(v==par)continue;
        dfs(v,node,eventimes,oddtimes,depth+1);

    }

}






int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
int n;cin>>n;
for(int i=0;i<n-1;i++){
    int a,b;cin>>a>>b;
    adj[a].push_back(b);
    adj[b].push_back(a);
}
for(int i=1;i<=n;i++)cin>>val[i];
for(int i=1;i<=n;i++)cin>>goal[i];
dfs(1,-1,0,0,0);
cout<<arr.size()<<endl;
for(int i:arr)
    cout<<i<<endl;

    return 0;
}

