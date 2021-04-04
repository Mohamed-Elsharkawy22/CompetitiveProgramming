#include <bits/stdc++.h>
using namespace std;
typedef long long ll ;
const ll N=200006;
int n;ll arr[N];
int main(){
    int t;cin>>t;
    fd:
    while(t--) {
        int ones=0,twos=0;
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            if(arr[i]==1)ones++;
            else
                twos++;
        }
        if(twos%2!=0){
            if(ones>=2)
            {
                ones-=2;
                twos+=1;
            }else{
                cout<<"no\n";
                goto fd;
            }
       
        }

if(ones %2==0 && twos%2==0){
    cout<<"yes\n";
}else{
    cout<<"no\n";
}
        }


    return 0;
}
