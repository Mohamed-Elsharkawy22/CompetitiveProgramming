#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=200005;

int dp[72][72][72][72];
int n,m,k;
int arr[72][72];
int solve(int i,int j,int cntsf,int modsf ){

  if(i == n){
   if(modsf == 0){
       return 0;
   }else{
       return (INT_MIN);
   }
  }

if(j == m){
    return solve(i+1,0,0,modsf);
}

int &ret=dp[i][j][cntsf][modsf];
if(~ret) return ret;

     ret= solve(i, j+1, cntsf, modsf);

     if(cntsf < m/2 ) {
         ret = max(ret, arr[i][j] + solve(i, j + 1, cntsf + 1, (modsf+ arr[i][j])%k) );
     }

return ret;
}



int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

memset(dp,-1,sizeof dp);
cin>>n>>m>>k;

for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>arr[i][j];
    }
}

cout<<solve(0,0,0,0);
    return 0;
}

