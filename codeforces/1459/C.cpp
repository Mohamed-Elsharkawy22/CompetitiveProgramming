#include <bits/stdc++.h>
using namespace std;
typedef long long ll ;
const int N=300005;
ll gcd(ll x,ll y){return y==0?x:gcd(y,x%y);}

ll a[N],b[N];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int m,n;cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
ll gc=0;
    sort(a,a+n);
    for(int i=1;i<n;i++){
     gc=gcd(gc,a[i]-a[i-1]) ;
    }
for(int i=0;i<m;i++){
    cout<<gcd(b[i]+a[0],gc)<<' ';
}
    return 0;
}