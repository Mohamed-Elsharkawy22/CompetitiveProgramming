#include <bits/stdc++.h>
using namespace std;


int main()
{

int n,k,a,b,cnt=0;
cin>>n>>k;

for(int i=0;i<n;i++)
{
    cin>>a>>b;
    cnt+=b-a+1;

}
cout<<((k-cnt)%k+k)%k;



return 0;
}
