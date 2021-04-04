#include <bits/stdc++.h>
using namespace std;
typedef long long ll ;
const int N=55;
int n;
ll dp[101][6];
int arr[101];
ll fun(int i,int prev){
    if(i==n){
        return 0;
    }

      ll &ret = dp[i][prev];
    if(~ret) return ret;

    ret=INT_MAX;
// 1 gym  2 contest
    if(arr[i]==0){

        return ret=min(ret,1+fun(i+1,0));

    }else if(arr[i]==1){
           if(prev!=1)
       ret=min( fun(i+1,1) , 1+fun(i+1,0));
           else{
               ret=min(ret,1+fun(i+1,0));
           }

    }else if(arr[i]==2){
          if(prev!=2 ) {
              ret = min(fun(i + 1, 2), 1 + fun(i + 1, 0));
          }else{
            ret=min(ret,1+fun(i+1,0));
        }


    }else if(arr[i]==3){
           if(prev!=1){
               ret=min(ret,fun(i+1,1));
           }
           if(prev!=2)
        ret=min(ret,fun(i+1,2));

    }

return ret;

}




int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
memset(dp,-1,sizeof dp);


cin>>n;
    for(int i=0;i<n;i++)cin>>arr[i];

    cout<<fun(0,5)<<endl;
    return 0;
}