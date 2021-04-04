#include <bits/stdc++.h>
using namespace std;
typedef long long ll ;
const ll N=100005;
int arr[N];
int main(){


    int t;cin>>t;
    while(t--) {
        int n, x;
        cin >> n >> x;
        ll min = 0;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            if(arr[i]%x!=0)
               min+=arr[i];
        }
        ll max = 0;
        min=((min+x-1)/x);
        for (int i = 0; i < n; i++) {
            if(arr[i]%x==0){
                min+=((arr[i]) / x);
            }
            max += ((arr[i] + x - 1) / x);
        }


        cout << min<< " " << max << endl;

    }
    return 0;
}
