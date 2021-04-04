#include <bits/stdc++.h>
using namespace std;
typedef long long ll ;
const int N = 3e5 + 5, INF = 2e9;
ll gcd(ll a, ll b){ return b == 0 ? a : gcd(b,a%b); }
ll lcm(ll a, ll b) { return a/gcd(a,b)*b; }


void solve() {
    int n;
    cin >> n ;


    for(int i=0;i<n;i++) {
         if(i==0){
             cout<<9;

         }else
         cout<<(i+7)%10;
    }

cout<<endl;
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


