#include <bits/stdc++.h>
using namespace std;
typedef long long ll ;
#define all(v) (v).begin(), (v).end()
const int N = 3e5 + 5, INF = 2e9;
ll gcd(ll a, ll b){ return b == 0 ? a : gcd(b,a%b); }
ll lcm(ll a, ll b) { return a/gcd(a,b)*b; }


void solve() {
    int n, k;
    cin >> n ;
    vector<int> arr(n, 0);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    auto score = [&](int i){
        if(i<=0 || i>=n-1)
            return 0;
        if(arr[i]>arr[i-1] && arr[i] > arr[i+1]){
            return 1;
        }
        if(arr[i]<arr[i-1] && arr[i] < arr[i+1]){
            return 1;
        }

        return 0;
    };

    int org=0;
    for (int i = 0; i < n; ++i) {
    org+=score(i);
    }
    int ans=org;
    for(int i=0;i<n;i++){
        int r=arr[i];
        set<int>candi;

        if(i>0){
            candi.insert(arr[i-1]-1);
            candi.insert(arr[i-1]);
            candi.insert(arr[i-1]+1);
        }
        if(i<n-1){

            candi.insert(arr[i+1]-1);
            candi.insert(arr[i+1]);
            candi.insert(arr[i+1]+1);
        }

        int without=org-score(i)-score(i-1)-score(i+1);

        for(int v:candi){
            arr[i]=v;
            ans=min(ans,without+score(i-1)+score(i)+score(i+1));
        }
        arr[i]=r;
    }
cout<<ans<<endl;
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


