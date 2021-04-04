#include <bits/stdc++.h>
using namespace std;
typedef long long ll ;
const int N=1000003;




int main(){


int n,sum;
cin>>n>>sum;

if(sum==0 && n>1 || sum > 9*n ){
    cout<<"-1 -1\n";
    return 0;
}

    vector<int>v(n,0);
int s=sum;
s--;
v[0]=1;
    for(int i=n-1;i>=0;i--){
        int y=min(9,s);
        v[i]+=y;
        s-=y;
    }
    for(int i:v){
        cout<<i;
    }
cout<<' ';
s=sum;
    for(int i=0;i<n;i++){
     cout<<min(s,9);
     s-=min(s,9);
}



    return 0;
}

