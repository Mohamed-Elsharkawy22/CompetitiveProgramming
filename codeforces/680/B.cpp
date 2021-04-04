#include <bits/stdc++.h>
using namespace std;
int arr[1002];
int main()
{

 cin.sync_with_stdio(false);
    cin.tie(NULL);
    int n,x,ans=0;
    cin>>n>>x;
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
    for(int i=1;i<=n;i++)
        if(arr[i])
    {

        int d=i-x; int j=x-d;
        if(j<1||j>n||arr[i]==arr[j])
            ++ans;
    }
  cout<<ans;
         return 0;
}
