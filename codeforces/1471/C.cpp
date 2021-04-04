#include <bits/stdc++.h>
using namespace std;
typedef long long ll ;
const int N = 3e5 + 5, INF = 2e9;
ll gcd(ll a, ll b){ return b == 0 ? a : gcd(b,a%b); }
ll lcm(ll a, ll b) { return a/gcd(a,b)*b; }


void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> num(n, 0);
    vector<int> p(k, 0);
    ll ans = 0;
    for (int i = 0; i < n; ++i) {
        cin >> num[i];
    }
    for (int i = 0; i < k; ++i) {
        cin >> p[i];
    }
    sort(num.begin(), num.end(), [](int a, int b) {
        return a > b;
    });

    for (int i = 0; i < n; i++) {
        if(num[i]-1 > i) {
            ans += p[i];
        }else {
             ans += p[num[i]-1];
         }
    }
    cout<<ans<<endl;

}



int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}