
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
char m[1002], n[1002];
int dp[1002][1002];
int sz1=0,sz2=0;
int solve(int i=0,int j=0)
{

    if(i==sz1)
    {
        return (sz2-j);
    }
    if(j==sz2)
    {
        return (sz1-i);
    }
    int &ret = dp[i][j];
    if(~ret) return ret;


    if(m[i] == n[j])
        return ret = solve(i+1,j+1);



    ret = min(1+ solve(i,j+1),min(1+ solve(i+1,j) ,1+ solve(i+1,j+1)));

    return ret;
}
void trace(int i,int j,int c){

    if(i==sz1 && j==sz2) return ;


    if(i==sz1){
        cout<<"INSERT "<<i+c+1<<' '<<n[j]<<endl;
        trace(i,j+1,c+1);
        return;

    }else if(j==sz2){
        cout<<"DELETE "<<i+c+1<<endl;
        trace(i+1,j,c-1);
        return;

    }else if(m[i]==n[j]){ trace(i+1,j+1,c);
        return;

    }else if(solve(i,j)==1+solve(i,j+1)){
        cout<<"INSERT "<<i+c+1<<" "<<n[j]<<endl;
        trace(i,j+1,c+1);
        return;

    }else if(solve(i,j)==1+solve(i+1,j)){
        cout<<"DELETE "<<i+c+1<<endl;
    trace(i+1,j,c-1);
        return;

    }else{
       cout<<"REPLACE "<<i+c+1<<" "<<n[j]<<endl;
        trace(i+1,j+1,c);
        return;
    }
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

cin>>m>>n;
sz1=strlen(m),sz2=strlen(n);
memset(dp,-1,sizeof dp);

cout<<solve(0,0)<<endl;
trace(0,0,0);
    return 0;
}

