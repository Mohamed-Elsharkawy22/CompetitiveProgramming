#include <bits/stdc++.h>
using namespace std;
int arr[1001];
int arr1[1001];
int main()
{

 cin.sync_with_stdio(false);
    cin.tie(NULL);

 int n ;cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

   int k;
    for(int j=0;j<n;j++)
    {
        int i=j+1,x=j,cnt=0,k=j-1;
        while(arr[x]>=arr[i]&&i<n)
        {
           if(arr[x]>=arr[x+1]){
            i++;
            x++;
            ++cnt;}
            else
                break;
        }
        x=j;
        while(arr[x]>=arr[k]&&k>=0)
        {
            if(arr[x]>=arr[x-1])
          {
              x--;
            k--;
            ++cnt;}
            else
                break;
        }

        arr1[j]=cnt+1;

    }

    int imax=0;

    for(int i=0;i<n;i++)
    {

        imax=max(imax,arr1[i]);
    }
    cout<<imax;


    return 0;
}
