#include <bits/stdc++.h>
using namespace std;
typedef long long ll ;
const int N=1003;
int n;
int dp[100001];
int pos[100001];
int height[100001];
int solve(int i){
    if(i==n-1) return 0;


    int &ret=dp[i];
    if(~ret) return ret;



    if(pos[i]-pos[i-1] > height[i]){

        ret=max(ret,1+solve(i+1));
    }else if(pos[i+1]-pos[i] > height[i]){
        pos[i]+=height[i];
        ret=max(ret,1+solve(i+1));
    }else{
        ret=max(ret,solve(i+1));
    }

    return ret;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin>>n;
    memset(dp,-1,sizeof(dp));
    for(int i=0;i<n;i++){
        cin>>pos[i]>>height[i];
    }

    if(n>2) {
        cout << solve(1) + 2 << endl;
    }else{
        cout<<n<<endl;
    }
    return 0;
}