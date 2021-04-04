#include <bits/stdc++.h>
using namespace std;
typedef long long ll ;
const ll N=200006;
int n;ll arr[N];
ll dp[N];
ll solve(ll i){

    if(i>n){
        return 0;
    }
    ll &ret=dp[i];
    if(~ret)return ret;


    ret = max(ret,arr[i]+solve(i+arr[i]));
    return ret;
}

int main(){
    int t;cin>>t;
    while(t--){
       cin>>n;
        memset(dp,-1,sizeof dp);
    ll mx=-1e17;
       for(int i=1;i<=n;i++)cin>>arr[i];
        for(int i=1;i<=n;i++){
            mx=max(mx,solve(i));
        }



cout<<mx<<endl;
    }
    return 0;
}
