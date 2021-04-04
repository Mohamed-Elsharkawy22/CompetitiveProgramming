#include <bits/stdc++.h>
using namespace std;
int arr[15000];
int main() {
int sumo=0;
int n;cin>>n;

for(int i=0;i<n;i++)
{
    cin>>arr[i];
}
for(int i=0;i<n;i++)
{ if(arr[i]%2!=0)
  sumo++;
}

int e=sumo/2;
int t=e;
for(int i=0;i<n;i++)
{
    if(arr[i]%2==0)
    {
        arr[i]=arr[i]/2;
    }
    else if(arr[i]%2!=0&&e)
    { arr[i]=ceil(arr[i]/2.);
        --e;
    }
    else if(arr[i]%2!=0&&t&&!e)
    {
        arr[i]=floor(arr[i]/2.);
        --t;
    }
}

for(int i=0;i<n;i++)
{
    cout<<arr[i]<<endl;
}

 return 0;
}
