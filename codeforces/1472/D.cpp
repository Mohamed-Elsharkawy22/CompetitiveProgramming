#include <bits/stdc++.h>
using namespace std;
typedef long long ll ;
const ll N=200006;

ll arr[N];


int main(){
int t;cin>>t;
while(t--){
    int n;cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n,[](int a,int b){
        return a>b;
    });
      ll a=0,b=0;
    for(int i=0;i<n;i++)
    {
        if(i%2==0){
            if(arr[i]%2==0){
                a+=arr[i];
            }
        }else{
            if(arr[i]%2!=0)
                b+=arr[i];
        }
    }
    if(a>b) cout<<"Alice\n";
    else if(a<b){
        cout<<"Bob\n";
    }else{
        cout<<"Tie\n";
    }
}

    return 0;
}
