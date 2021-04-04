#include <bits/stdc++.h>
using namespace std;
typedef long long ll ;
const int N=1003;



int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

     int t;cin>>t;
     while(t--){
         int n;cin>>n;
         string m;cin>>m;
         int cnt=0;
         for(int i=n-1;i>=0;i--){
             if(m[i]==')')
                 cnt++;
             else
                 break;
         }

         if(cnt*2 <= n){
             cout<<"No\n";
         }else{
             cout<<"Yes\n";
         }

     }

    return 0;
}