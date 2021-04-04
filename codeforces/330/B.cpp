#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=1005;
int vis[N];
int main(){
   
int m,n;cin>>m>>n;

for(int i=0;i<n;i++)
{
    int a,b;cin>>a>>b;
    vis[a]=1;
    vis[b]=1;

}
    int i=1;
for(;i<=m;i++){
if(!vis[i])break;
}
cout<<m-1<<endl;
for(int j=1;j<=m;j++){
    if(i==j)continue;

    cout<<i<<" "<<j<<endl;

}
    return 0;
}
