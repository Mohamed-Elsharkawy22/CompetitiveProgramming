#include <bits/stdc++.h>
using namespace std;
typedef long long ll ;
int mod=1000000007;

int x,y;
ll f1[10];


int main(){


  cin>>x>>y;
 int n;cin>>n;
if(x>y){
    f1[0]=x-y;
    f1[1]=x;
    f1[2]=y;
    f1[3]=mod-(x-y);
    f1[4]=mod-x;
    f1[5]=mod-y;
    if(n<6){
        cout<<(f1[n]+mod)%mod;
    } else{
        cout<<(f1[n%6]+mod)%mod;
    }

}else if(x<y){
f1[0]=x;
f1[1]=y;
f1[2]=y-x;
f1[3]=mod-x;
f1[4]=mod-y;
f1[5]=mod-(y-x);
cout<<(f1[(n-1)%6]+mod)%mod;
}else{
    f1[0]=0;
    f1[1]=x;
    f1[2]=y;
    f1[3]=y-x;
    f1[4]=mod-x;
    f1[5]=mod-y;
    if(n<6){
        cout<<(f1[n]+mod)%mod;
    } else{
        cout<<(f1[n%6]+mod)%mod;
    }

}

    return 0;
}

