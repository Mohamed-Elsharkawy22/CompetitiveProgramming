#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=200005;


int arr[55];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;cin>>t;
    while(t--){

        int n;
       cin>>n;
       int st=0,en=0;
for(int i=0;i<n;i++){cin>>arr[i];}

       for (int i=0;i<n;i++) {
           if (arr[i] == 1) {
               st = i;
               break;
           }
       }
           for (int i=n-1;i>=0;i--){
               if(arr[i]==1){
                   en=i;
                   break;
               }}
    int ans=0;
               for(int i=st;i<=en;i++)
               {
                   if(arr[i]==0) ans++;
               }

    cout<<ans<<endl;
}


    return 0;
}

