#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=200005;


ll arr[300005];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;cin>>t;
    while(t--){

        int n;cin>>n;
        ll bgst=-1;int ii=0;
        for(int i=0;i<n;i++)cin>>arr[i];

        for(int i=0;i<n;i++){

            if(   arr[i] > arr[i==0?i:i-1] || arr[i] > arr[i==n-1?i:i+1]) {

                if (bgst < arr[i] ) {
                    bgst = arr[i];
                    ii = i;
                }
            }

        }

        if(bgst==-1){
            cout<<-1<<endl;
            continue;
        }

        if(arr[ii]>arr[ii+1]){
            arr[ii+1]=-1;
            arr[ii]+=1;
        }else if(arr[ii]>arr[ii-1]){
            arr[ii-1]=-1;
            arr[ii]+=1;
        }
        ll mx=-1;
        for(int i=0;i<n;i++){
            if(i==ii)continue;
            mx=max(mx,arr[i]);
        }

        if(arr[ii]+n-2 > mx){
            cout<<ii+1<<endl;
        }else{
            cout<<-1<<endl;
        }


    }


    return 0;
}
