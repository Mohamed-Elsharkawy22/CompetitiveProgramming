#include<bits/stdc++.h>
using namespace std;
typedef long long ll;





int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
int n,m;cin>>n>>m;

set<int>ss;
    int g,s;
    for(int i=0;i<n;i++){

        for(int j=0;j<m;j++){
             char c;cin>>c;
             if(c=='G') g=j;
             if(c=='S') s=j;
        }

     if(s-g<=0)
     {
         cout<<-1<<endl;
         return 0;
     }else{
         ss.insert(s-g);
     }
    }

cout<<ss.size()<<endl;
    return 0;
}
