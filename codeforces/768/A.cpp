#include<iostream>
int a[100001];
using namespace std;
int main()
{ int maxx=0,cnt=0,minn=1000000000;
    int n;cin>>n;
for(int i=0;i<n;i++)
{
    cin>>a[i];
    maxx=max(maxx,a[i]);
    minn=min(minn,a[i]);
}
for(int i=0;i<n;i++)
{
    if(a[i]> minn && a[i]<maxx)
    {
        cnt++;
    }
}
cout<<cnt<<endl;


return 0;
}


