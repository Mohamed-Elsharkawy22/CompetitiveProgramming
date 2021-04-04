#include <bits/stdc++.h>
using namespace std;
typedef long long ll ;
const int N=1000003;/*
void setIO(string name) {
    freopen((name+".in").c_str(),"r",stdin);
    freopen((name+".out").c_str(),"w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
}

*/
ll arr[N];
map<ll ,int>freq;
int main(){

   int n; cin>>n;
   for(int i=0;i<n;i++)cin>>arr[i];

sort(arr,arr+n);
ll c;
    c=arr[n-1]-arr[0];
cout<<c<<" ";
ll cnt=0;
    for(int i=0;i<n;i++){

        cnt+=freq[arr[i]-c];
        freq[arr[i]]++;
    }
cout<<cnt<<" ";
    return 0;
}

