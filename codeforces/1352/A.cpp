#include <bits/stdc++.h>
using namespace std;
int arr[100000];
int main()
{int t;cin>>t;
while(t--)
{
    memset(arr,0,sizeof arr);
int n;
cin>>n;
int x=1;
int cnt=0,i=0;

while(n)
{
    int dig=n%10;
    if(dig!=0)cnt++;
    arr[i++]=dig*x;
    n/=10;
    x*=10;
}
cout<<cnt<<"\n";
for(int i=0;i<1000;i++){
if(arr[i]!=0)cout<<arr[i]<<" ";
}

cout<<"\n";
}
return 0;
  }
