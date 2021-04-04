#include <bits/stdc++.h>
using namespace std;

typedef long long ll ;
const int N=100005;
int n;
vector<int>adj[N];

int cnt1=0,cnt2=0;
void dfs (int u,int p, int c){
    if(c==0)
        cnt1++;
    else
        cnt2++;
    for(int v:adj[u]){
        if(v==p) continue;
        dfs(v,u,!c);
    }

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
   cin>>n;

   for(int i=0;i<n-1;i++){
       int a,b;cin>>a>>b;
       adj[a].push_back(b);
       adj[b].push_back(a);
   }
  dfs(1,-1,0);
   cout<<(1ll*cnt1*cnt2)-n+1;
        return 0;
}