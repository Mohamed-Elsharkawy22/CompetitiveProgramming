#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int arr[100004];
map<int,int>freq;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


int n,k;cin>>n>>k;
ll cnt=0;
for(int i=0;i<n;i++)cin>>arr[i];

    for(int i=0;i<n;i++){

        cnt+=freq[arr[i]^k];

        freq[arr[i]]++;
    }

cout<<cnt;

    return 0;
}
