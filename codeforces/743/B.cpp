#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int arr[1004];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


int n;ll k;
cin>>n>>k;

cout<<1+__builtin_ctzll(k)<<endl;
    return 0;
}
