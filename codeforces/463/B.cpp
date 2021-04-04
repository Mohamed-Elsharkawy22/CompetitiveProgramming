#include <bits/stdc++.h>
using namespace std;
int arr[100005];
int main()
{
 cin.sync_with_stdio(false);
    cin.tie(NULL);

  int n;cin>>n;
  for(int i=0;i<n;i++)
  {
      cin>>arr[i];
  }

  int m=arr[0],e=0;
  for(int i=0;i<n;i++)
  {
      if(arr[i]>=arr[i+1])
      {
          e+=(arr[i]-arr[i+1]);
      }
      else
      {
           if(e>=arr[i+1]-arr[i])
          e-=(arr[i+1]-arr[i]);

      else{

        m+=(arr[i+1]-arr[i])-e;
        e=0;
      }
  }}
  cout<<m;


         return 0;
}
