
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=105;
set<int>adj[N];
vector<int>ad[N];
set<int>s[N];
int cnt=0;
int vis[N];

void dfs(int n){
    cnt++;
    vis[n]=1;
    for(int v:adj[n]) {
        if (vis[v] == 1)continue;
       dfs(v);

    }
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m;cin>>n>>m;
for(int i=1;i<=n;i++){

    int sz;cin>>sz;
    while(sz--){
     int a;cin>>a;
        ad[i].push_back(a);
        s[i].insert(a);
    }
}
    bool fd=0;

for(int i=1;i<=n;i++){

        for(int v:ad[i]){
            fd=1;
            for(int j=1;j<=n;j++){
                if(i!=j && s[j].count(v)){
                    adj[i].insert(j);
                    adj[j].insert(i);

                }
            }
        }

    }


int cnt1=0;
for(int i=1;i<=n;i++)
{
    if(vis[i]==0){
    cnt=0;
        dfs(i);
        if(cnt>0)
            cnt1++;
    }
}
if(fd==0){
    cout<<n<<endl;
}else{


cout<<(cnt1-1)<<endl;}
    return 0;
}

