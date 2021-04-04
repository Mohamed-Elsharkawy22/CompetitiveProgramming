#include <bits/stdc++.h>
using namespace std;
typedef long long ll ;
const ll N=502;
int mod=1000000007;
int x,y;

int vis[N][N];char arr[N][N];
bool valid(int i ,int j){

    return i>=0 && i<x && j>=0 && j<y && !vis[i][j]&& arr[i][j]=='.';
}


int cnt3=0;
int dx[]={1,-1,0,0};
int dy[]={0,0,1,-1};

int k;
int cnt=0;
void dfs(int i,int j){

    vis[i][j]=1;
      cnt++;
      if(cnt==cnt3-k)
          return;
    for(int z=0;z<4;z++){
        int nx=i+dx[z];
        int ny=j+dy[z];
        if(valid(nx,ny)&&cnt<cnt3-k)
            dfs(nx,ny);
    }


}


int main(){
cin>>x>>y>>k;


for(int i=0;i<x;i++){
    for(int j=0;j<y;j++){
        cin>>arr[i][j];
        if(arr[i][j]=='.')
            cnt3++;
    }
}
int cnt1=0;
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
        if(arr[i][j]=='.' && !cnt1 && !vis[i][j]){
            cnt1++;
            dfs(i,j);
        }else if(k>0 && arr[i][j] == '.' && !vis[i][j] && cnt1){
            arr[i][j] ='X';
            k--;
        }
        }
    }





    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){

            cout<<arr[i][j];
        }
    cout<<endl;
    }
    return 0;
}

