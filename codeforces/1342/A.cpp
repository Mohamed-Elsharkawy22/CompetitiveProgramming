#include <bits/stdc++.h>
using namespace std;

int main()
{
   int t; long long x,y,a,b,sum;cin>>t;
    while(t--)
    {
    cin>>x>>y>>a>>b;
   if(2*a <= b)
   {
       cout<<( x + y ) * a<<"\n";
   }
   else
   {
       int mn=min(x,y);
       int mx=max(x,y);
       cout<<( ( mn * b ) + ( ( mx-mn ) * a ))<<"\n";
   }
    }


return 0;
  }
