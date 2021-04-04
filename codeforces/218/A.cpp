#include<iostream>
using namespace std;

int arr[101];
int main()
{
   int n ,k;
   cin>>n>>k;
   for(int i=1;i<=(2*n+1);i++)
   {
       cin>>arr[i];
   }
   if(n>1)
{
       for(int i=4;i<=(2*n);i+=2)
       {
           if(arr[i]-arr[i-1]>1&&arr[i]-arr[i+1]>1)
          {
           --arr[i];
           k--;
           if(k==0)
               break;

           }
       }
}

 if(k-->0)
    --arr[2];
   for(int i=1;i<=(2*n+1);i++)
       cout<<arr[i]<<" ";

    return 0;
}
