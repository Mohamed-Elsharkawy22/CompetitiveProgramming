#include <bits/stdc++.h>
using namespace std;
typedef long long ll ;
#define all(v) (v).begin(), (v).end()
const int N = 3e5 + 5, INF = 2e9;
ll gcd(ll a, ll b){ return b == 0 ? a : gcd(b,a%b); }
ll lcm(ll a, ll b) { return a/gcd(a,b)*b; }


void solve() {
    int k;
    vector<int> arr(4, 0);
    for (int i = 0; i < 4; ++i) {
        cin >> arr[i];
    }
    cin>>k;
    vector<int> is(k+1, 0);
  int cnt=0;
    for (int i = 0; i < 4; ++i){
        bool fd=0;
        for(int j=arr[i];j<=k;j+=arr[i]){
            is[j]=1;
            fd=1;

        }
        if(fd==0)
            break;
    }
    for(int i=1;i<=k;i++){
        if(!is[i]) cnt++;
    }

    cout<<k-cnt<<endl;


}



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr),cout.tie(nullptr);
   // int t;cin>>t;
   // while(t--){
        solve();
  //  }
    return 0;
}


