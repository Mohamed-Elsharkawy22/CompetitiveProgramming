#include<bits/stdc++.h>
using namespace std;
const int N=1000005;

long long arr[N],arr1[N];

int main()
{
    int n;cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        arr1[i]=arr[i];
    }
sort(arr1,arr1+n);
    int l=-1,r=-1,e=1;

for(int i=0;i<n;i++)
{
    if(arr[i]!=arr1[i])
    {
        l=i;
        break;
    }

}

    for(int i=n-1;i>=0;i--)
    {
        if(arr[i]!=arr1[i])
        {
            r=i;
            break;
        }

    }

  if(l==-1&&r==-1)
  {
      cout<<"yes"<<endl<<1<<" "<<1<<endl;
      return 0;
  }
  e=1;
  if(l!=-1&&r!=-1)
  {
      reverse(arr+l,arr+r+1);
      for(int i=0;i<n;i++)
      {
          if(arr[i]!=arr1[i])
          {
              cout<<"no"<<endl;
              return 0;
          }else
              e++;
      }
  }

cout<<"yes"<<endl<<l+1<<" "<<r+1<<endl;




    return 0;
}