#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int arr[1004];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


int n,m,k;
cin>>n>>m>>k;
for(int i=1;i<=m+1;i++)cin>>arr[i];

int ans=0;
for(int i=1;i<m+1;i++){
    int s=0;
    for(int j=0;j<n;j++)
    {
        if( arr[i]&(1<<j) && arr[m+1]&(1<<j) || !(arr[i]&(1<<j)) && !(arr[m+1]&(1<<j)))
            s++;
    }
    if(n-s<=k)ans++;
}

cout<<ans<<endl;
    return 0;
}
