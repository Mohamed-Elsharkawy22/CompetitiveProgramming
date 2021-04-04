#include <bits/stdc++.h>
using namespace std;
typedef long long ll ;
const ll N=200006;
int main(){
    int t;cin>>t;
    while(t--) {
      int h,w,n;cin>>h>>w>>n;
      ll res=1;
      while(h%2==0 || w%2==0)  {

          if(h%2==0){
          res*=2;
          h/=2;
          }
          if(w%2==0){
              res*=2;
              w/=2;
          }
      }
        if(res>=n) cout<<"yes\n";
        else{
            cout<<"no\n";
        }


        }

    return 0;
}
