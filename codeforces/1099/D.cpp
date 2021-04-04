#include <bits/stdc++.h>
using namespace std;
typedef long long ll ;
const ll N=200006;
vector<int>adj[N];
ll cst[N], sum;
bool fd=1;
void dfs(int n,int p,ll last) {

    for (int v:adj[n]) {
        if(v==p) continue;
        if (cst[v] == -1) {
            ll mn = 10e13;
            if (adj[v].size() - 1 > 0) {
                for (int vv:adj[v]) {
                    if (vv == n)continue;
                    mn = min(cst[vv], mn);
                }
                cst[v] = mn;
                if (cst[v] < last) {
                    fd = 0;
                    return;
                } else {
                    sum += cst[v] - last;
                    dfs(v, n, cst[v]);
                }
            }
        } else {
            if (cst[v] < last) {
                fd = 0;
                return;
            } else {
                sum += cst[v] - last;
                dfs(v, n, cst[v]);
            }
        }


    }


}


int main(){
    int n;cin>>n;
    for(int i=2;i<=n;i++){
        int a;cin>>a;
        adj[a].push_back(i);
        adj[i].push_back(a);
    }
    for(int i=1;i<=n;i++){
        cin>>cst[i];
    }
    sum=cst[1];
   dfs(1,-1,cst[1]);
    if(fd){
        cout<<sum;
    } else {
        cout << -1;
    }
        return 0;
}
