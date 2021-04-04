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


int main(){

    int t; cin>>t;
    while(t--){

        ll n;cin>>n;

        ll a=n;
        while(1) {

            int sum=0;
            while (n) {
                sum += (n % 10);
                n /= 10;
            }

            if(gcd(a,sum)> 1)
                break;
            a++;
            n=a;
        }

        cout<<a<<endl;
    }

    return 0;
}