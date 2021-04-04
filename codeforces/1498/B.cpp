#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FASTIO    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
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


int freq[4000002];
int main(){

    int t; cin>>t;
    while(t--){

      int n,x;
      cin>>n>>x;
        for (int i = 0; i <n ; ++i) {
          int a;  cin>>a;
          freq[a]++;
        }
        int ans=0;
        while(n>0) {
            int a = x;
            for (int i = (1 << 20); i >= 1; i/=2) {
                while (freq[i] > 0 && i <= a) {
                    a -= i;
                    freq[i]--;
                    n--;
                }
            }
            ans++;
        }

cout<<ans<<endl;
    }







    return 0;
}
