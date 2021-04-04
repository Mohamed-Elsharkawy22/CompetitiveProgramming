#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=2005;
vector<int>adj[N];
vector<int>v;
int lvl=0;
int vis[N];
void bfs () {

    queue<int>q;
    for(int i=0;i<v.size();i++){
        q.push(v[i]);
    }

    while(!q.empty()){

        int sz=q.size();
        lvl++;
        while(sz--){

            int u=q.front();
              q.pop();
             vis[u]=1;
for(int uu:adj[u]){
    if(vis[uu] == 1) continue;
    vis[uu]=1;
    q.push(uu);

}

        }



    }


}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    int n;cin>>n;

    for(int i=1;i<=n;i++) {
        int a;
        cin >> a;
        if (~a) {
            adj[a].push_back(i);

        } else {
            v.push_back(i);
        }
    }

    lvl=0;
  bfs();
    cout<<lvl<<endl;

            return 0;
}

