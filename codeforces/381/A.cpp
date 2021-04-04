#include<iostream>
using namespace std;

int main ()
{
  int n,arr[1000],a=0,b=0;
  cin>>n;
int z=n-1;

  for (int i=0;i<n;i++)
  {
      cin>>arr[i];
  }

int i;
  for(i=0;i<=z;)
  {
      if (arr[i]>arr[z])
        {
        a+=arr[i];
        ++i;

        }
      else
        {
        a+=arr[z];
           z--;
        }

       if(i<=z)
    {
      if (arr[i]>arr[z])
        {
        b+=arr[i];
       ++i;
        }
      else
        {
              b+=arr[z];
         z--;
        }
    }

  }
      cout<<a<<" "<<b;

return 0;
}
