#include<bits/stdc++.h>
using namespace std;
const int N=200005;
int arr1[N];
int mod=1e9+7;
typedef long long ll ;
int vis[N];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

int cnt=0;
int n, m;cin>>n>>m;
queue<int>q;
if(n>=m){

    cout<<n-m<<endl;
    return 0;
}
q.push(n);
while(!q.empty()){
    int sz=q.size();

    while(sz--){
        int t=q.front();
        q.pop();
if(t==m) goto in;
    if(vis[t]==0) {
        if (t <= m && !vis[2*t]) q.push(2 * t);
        if (t >= 1 && !vis[t-1]) q.push(t - 1);
        vis[t]=1;
    }
    }
    cnt++;

}
in:
cout<<cnt<<endl;

  return 0;
}

