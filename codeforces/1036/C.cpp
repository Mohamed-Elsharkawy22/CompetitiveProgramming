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


vector<int>nums;
ll dp[19][5][2];
ll call(int d,int cnt,int f) {
    if (cnt > 3) {
        return 0;
    }
    if (d == nums.size()) {
        if (cnt == 0) {
            return 0;
        }
        if (cnt <= 3) {
            return 1;
        }
    }
        ll &ret = dp[d][cnt][f];
          if (~ret) return ret;

          ret=0;
        int up=(f==0?nums[d]:9);

        for (int i = 0; i <= up; ++i) {
            int nf = f;
            int ncnt = cnt;
            if (f == 0 && i < up) nf = 1;
            if (i != 0) ncnt++;
            ret += call(d + 1, ncnt, nf);
        }
        return ret;

}

ll solve(ll p){
    nums.clear();
    while(p>0){
        nums.push_back(p%10);
         p/=10;
    }
    reverse(nums.begin(),nums.end());
    memset(dp,-1,sizeof(dp));
    return call(0,0,0);

    }

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);
int t;cin>>t;
while(t--){
    ll a,b;cin>>a>>b;
    cout<<solve(b)-solve(a-1)<<endl;

}

    return 0;
}
