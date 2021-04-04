#include <bits/stdc++.h>
using namespace std;
 
int arr[100005];
 
 
int main() {
 
int n,m,in,x;cin>>n;
long long cnt1=0,cnt2=0;
for(int i=1;i<=n;i++)
{
    cin>>in;
    arr[in]=i;
}
cin>>m;
int i,sz=n;
while(m--)
{
   cin>>x;
{
 
}
cnt1+=arr[x];
cnt2+=sz-arr[x]+1;
}
cout<<cnt1<<" "<<cnt2;
 return 0;
} 