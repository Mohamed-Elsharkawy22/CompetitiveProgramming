#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);



    int n;cin>>n;
      int r1m=0;
    while(n--){
        int a;cin>>a;
        r1m=max(r1m,a);
    }
int m;cin>>m;
int p1m=0;
while(m--){
    int a;cin>>a;
    p1m=max(p1m,a);
}
int k,p2n=INT_MAX;cin>>k;
while(k--){
    int a;cin>>a;
    p2n=min(p2n,a);
}
int a,b;cin>>a>>b;
cout<<fixed<<setprecision(12)<<sqrt((1.0*b*p1m*r1m*r1m)/(1.0*a*p2n+1.0*b*p1m))<<endl;
    return 0;
}
