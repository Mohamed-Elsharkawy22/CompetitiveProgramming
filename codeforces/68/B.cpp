#include <bits/stdc++.h>
using namespace std;
typedef long long ll ;
const int N=100003;
const double eps=1e-7;
int n,k;
int arr[N];
bool ok(double ss){
   double mm=0;
    double posi=0;

for(int i=0;i<n;i++){
    if(ss > arr[i]){
        mm+=(ss-arr[i]);
    }else{ //if(ss < arr[i]){
        posi+=((arr[i]-ss)-((arr[i]-ss)*(1.0*k/100)));
    }
    }
return posi >= mm;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

cin>>n>>k;
for(int i=0;i<n;i++) cin>>arr[i];

 double i = 0;
    double sz = 1000;

    for (sz /= 2; sz > eps; sz /= 2) {
        if (ok(i + sz))
            i += sz;
    }



cout<<fixed<<setprecision(9)<<i<<endl;

    return 0;
}