#include<iostream>
using namespace std;

int main ()
{
   int n ,b=0,t=0;
   cin>>n;
   int arr [100000];
   for(int i=0;i<n;i++)
   {
       cin >>arr[i];
   }
       for(int i=0;i<n;i++)
       {
           if(arr[i]>0)
            t+=arr[i];

           if(arr[i]==-1 && t==0)

            b++;
        if(arr[i]==-1&&t!=0)
            t--;
       }
     cout<<b;
return 0;
}
