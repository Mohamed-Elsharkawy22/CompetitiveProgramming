#include <bits/stdc++.h>
using namespace std;
typedef long long ll ;
#define all(v) (v).begin(), (v).end()
const int N = 3e5 + 5, INF = 2e9;
ll gcd(ll a, ll b){ return b == 0 ? a : gcd(b,a%b); }
ll lcm(ll a, ll b) { return a/gcd(a,b)*b; }
ll power(ll x, ll p, ll m) {
    ll ans = 1;
    while (p) {
        if (p & 1) ans = ans * x % m;
        x = x * x % m;
        p >>= 1; //p /= 2;
    }
    return ans;
}



void solve() {

    int n,d;cin>>n>>d;
    vector<int>arr(n);
    bool fd1=1;
for(int i=0;i<n;i++){
    cin>>arr[i];
    if(arr[i]>d)
        fd1=0;
}
sort(all(arr));
int st=0,en=n-1;
if(fd1==0){
while(st<en){
    if(arr[st]+arr[en]==d){
        cout<<"YES\n";
        goto fd;
    }else if (arr[st]+arr[en]>d){
        en--;
    } else{
        cout<<"YES\n";
        goto fd;
    }
}}else{
    cout<<"YES\n";
}
if(fd1==0){
cout<<"NO\n";
}
fd:
    ;

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr),cout.tie(nullptr);

     int t;cin>>t;
     while(t--){
    solve();
      }
    return 0;
}


