#include <bits/stdc++.h>
using namespace std;
typedef long long ll ;
const int N=1003;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

     int t;cin>>t;
     while(t--){
        ll n;
        cin>>n;
        while(1){
        ll y=n;
        bool fd=1;
        while(y){ 
                ll d=y%10;
                if( d!=0&& n%d!=0)
                {
                    fd=0;
                    break;
                }

                y/=10;

            }
             if(fd)
               break;
             else
                n++;
             }
cout<<n<<endl;

     }

    return 0;
}

