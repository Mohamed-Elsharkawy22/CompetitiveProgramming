#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int arr[10005];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    int t;cin>>t;
    while(t--){
        int n,k;cin>>n>>k;
        for(int i=0;i<n;i++)
          cin>>arr[i];

        int ans=-2;
        if(k>10000){
            cout<<-1<<endl;
            continue;
        }else{
            for(int i=0;i<k;++i){
                for(int j=0;j<n-1;++j){
                    if(arr[j]<arr[j+1]){
                         ++arr[j];
                         if(i==k-1){
                             ans=j;
                         }
                        break;
                    }


                }
            }


        }
        cout<<ans+1<<endl;

    }






    return 0;
}


