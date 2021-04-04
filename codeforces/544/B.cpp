#include <bits/stdc++.h>
using namespace std;
typedef long long ll ;
const ll N=102;
ll gcd(ll a, ll b){ return b == 0 ? a : gcd(b,a%b); }
ll lcm(ll a, ll b) { return a/gcd(a,b)*b; }

int n;
char arr[N][N];

int main(){
    int k;
    cin>>n>>k;
    int a;
    if(n%2==0) {
        a = (n/2)*(n);
    }else{
        a =(((n+1)/2)* ((n+1)/2) + (n/2) *(n/2));
    }
    if(k>a){
        cout<<"NO\n";
        return 0;
    }
    cout<<"YES\n";
    for(int i=0;i<n;i++) {
        for (int j = 0; j < n; j++) {

          if((i+j)%2 || !k ){
          cout<<"S";
          }else{
              --k;
              cout<<"L";
          }
        }
        cout<<endl;
        }



    return 0;
}
