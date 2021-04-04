#include <bits/stdc++.h>
using namespace std;
typedef long long ll ;
const ll N=100006;
ll gcd(ll a, ll b){ return b == 0 ? a : gcd(b,a%b); }
ll lcm(ll a, ll b) { return a/gcd(a,b)*b; }





void solve(){
    int n,k;cin>>n>>k;
    vector<int>arr(n,0);
    ll ans=0;
    for (int i = 0; i <n ; ++i) {
        cin>>arr[i];
        ans+=arr[i];
    }
    int cnt=0;
        while(true){
            cnt++;
            for (int i = 0; i <n ; ++i){

                if(arr[i]%k==0)
                {
                    ll kk = arr[i]/k;

                    ll po=pow(k,cnt);
                    ans += (po*kk);
                    arr[i]=kk;
                }else{
                    goto out;
                }

            }

        }
        out:
        cout<<ans<<endl;
    }

int main() {

    int t;cin>>t;
    while(t--){
        solve();
    }




    return 0;
}