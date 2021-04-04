#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=200005;



int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;cin>>t;
    while(t--){

        int n;
       cin>>n;
       int dig=n%10;
          int ans=0;
          ans+=(dig-1)*10;

          if(n<10){
              ans+=1;

          }else if(n<100){
              ans+=3;
          }else if(n<1000)
          {
              ans+=6;
          }else{
              ans+=10;
          }

     cout<<ans<<endl;


    }
    return 0;
}

