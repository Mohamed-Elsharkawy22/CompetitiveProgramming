#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=200005;


int arr[300005];
bool done[300005];

set<int>s1;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;cin>>t;
    while(t--){
        s1.clear();
        memset(done,0,sizeof done);
        int n;cin>>n;
        for(int i=1;i<=n;i++){
            cin>>arr[i];
            s1.insert(arr[i]);
        }
 if(s1.size()==1){
     cout<<"NO\n";
     continue;
 }else{
     cout<<"YES\n";
     int a=arr[1];
done[1]=1;
int g=-1;
     for(int i=2;i<=n;i++){
         if(arr[i]!=a){
             cout<<1<<" "<<i<<endl;
             done[i]=1;
             g=i;
         }
     }
     for(int i=2;i<=n;i++){
         if(done[i]==0){
             cout<<g<<" "<<i<<endl;
             done[i]=1;
         }

     }

 }



        }



    return 0;
}
