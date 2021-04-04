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

    vector<int> freq(4,0);
    string m, n;
    cin >> m >> n;
    bool fd=1;
    int lc=lcm(m.size(),n.size());
     string ans="";
     for(int i=0;i<lc;i++){
         if(m[i%m.size()]==n[i%n.size()]){
             ans+=m[i%m.size()];
         }else{
             fd=0;
             break;
         }
     }
     if(fd){
         cout<<ans<<endl;
     }else{
         cout<<-1<<endl;
     }
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


