#include <bits/stdc++.h>
using namespace std;
typedef long long ll ;
#define all(v) (v).begin(), (v).end()
//#define __builtin_popcount(mask) // nums of 1s in mask
const int N = 3e5 + 5; ll INF = 2e13;
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
int n,m,k;

int cst[19][19];

ll arr[19];

ll dp[19][(1<<18)+1];
ll solve(int j, int mask){

    if(__builtin_popcount(mask)==m){
        return 0;
    }
    if(j==n){
        return 0;
    }

    ll &ret = dp[j][mask];
    if(~ret) return ret;


    for(int i=0;i<n;i++){

        if(!((mask)&(1<<i))){
                  if((mask&(1<<j)))
                      ret=max(ret, arr[i] + cst[j][i] + solve(i, mask | (1 << i)));
                  else{
                      ret=max(ret, arr[i] + solve(i, mask | (1 << i)));
                  }

        }
    }

return ret;


}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);
   cin>>n>>m>>k;
    for (int i = 0; i < n ; ++i) {
        cin>>arr[i];
    }
    for (int j = 0; j < k ; ++j) {
       int a,b,c;cin>>a>>b>>c;
       a--,b--;
       cst[a][b]=c;
    }
memset(dp,-1,sizeof dp);
cout<<solve(0,0)<<endl;

    return 0;
}