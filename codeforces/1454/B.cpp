#include <bits/stdc++.h>
using namespace std;
typedef long long ll ;
const int N=200007;

int arr[N];
int freq[N];
int id[N];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

int t;cin>>t;
fd:
while(t--){
memset(freq,0,sizeof(freq));
   // memset(id,0,sizeof(id));

    int n;cin>>n;
    for (int i=0;i<n;i++) {
        cin>>arr[i];
        id[arr[i]]=i;
        freq[arr[i]]++;

    }
sort(arr,arr+n);
    for (int i=0;i<n;i++){
       if(freq[arr[i]]==1){
           cout<<id[arr[i]]+1<<endl;
           goto fd;
       }
    }

cout<<-1<<endl;
}
    return 0;
}