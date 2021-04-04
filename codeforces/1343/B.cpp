#include <bits/stdc++.h>
using namespace std;

int main()
{
int t;cin>>t;
while(t--)
{
    int n,sum=0;cin>>n;
    if(n%4!=0)
    {
        cout<<"NO"<<"\n";
    }
    else
    { sum=0;
        cout<<"YES"<<endl;
        for(int i=1;i<=n;i++)
        { if(i%2==0){
            cout<<i<<" ";
            sum+=i;
        }}

     for(int i=1;i<n-1;i+=2)
     {
         cout<<i<<" ";
         sum-=i;
     }
     cout<<sum<<endl;
    }

}

return 0;
  }

