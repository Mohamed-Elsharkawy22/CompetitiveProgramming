#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int arr[1004];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


int n;
cin>>n;
int ans;
for(int i=1;i<=10;i++){

    int b=((1<<i)-1)*((1<<(i-1)));
    if(n%b==0) ans=b;
}

cout<<ans;

    return 0;
}