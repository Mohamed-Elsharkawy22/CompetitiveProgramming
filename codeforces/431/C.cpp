#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(v) (v).begin(), (v).end()
//#define __builtin_popcount(mask) // nums of 1s in mask
//const int N = 3e5 + 5; ll INF = 2e13;
int mod= 1000000007;
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

int n,k,d;
int dp[101][101][2];
int solve(int i,int sum,bool ifd){

    if(sum<0)
        return 0;

    if(sum==0){
        if(ifd==0)
            return 0;
        else
            return 1;

    }

    int &ret=dp[i][sum][ifd];
    if(~ret) return ret;

    ret=0;
    for(int j=1;j<=k;j++){
        if(j>=d) {
            ret = (ret % mod + solve(i + 1, sum - j, 1) % mod) % mod;
        }else{
            ret=(ret%mod+solve(i+1,sum-j,ifd)%mod)%mod;
        }
    }
    return ret;

}




int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

cin>>n>>k>>d;
    memset(dp,-1,sizeof dp);

    cout<<solve(0,n,false)<<endl;


    return 0;
}