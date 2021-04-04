#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=200005;

ll fact[100];
ll c(int n,int r)
{
    return fact[n]/(fact[r]*fact[n-r]);
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;cin>>n;
    fact[0]=1;
    for(int i=1;i<=n;i++){
        fact[i]=fact[i-1]*i;
    }

    cout<< c(n,n/2) /2 * fact[ (n/2) -1 ]*fact[ (n/2)-1 ];

    return 0;
}

