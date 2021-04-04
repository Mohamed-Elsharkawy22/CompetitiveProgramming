#include<iostream>
#include<algorithm>
using namespace std;
int arr[100000];
int arr1[100000];
 const long long size=1000000;
long long cum[size];
const long long size1=1000000;
long long cum1[size1];
 int n;
int main()
 {
  cin>>n;

     for (int i=0;i<n;i++)
     {
         cin>>arr[i];
         arr1[i]=arr[i];
         cum[0]=arr[0];
         if(i>0)
         {
         cum[i]=cum[i-1]+arr[i];
         }
     }

      sort(arr1,arr1+n);
       for (int i=0;i<n;i++)
      {
       cum1[0]=arr1[0];
      if(i>0)
         {
         cum1[i]=cum1[i-1]+arr1[i];
         }
      }



     int m,t,l,r;cin>>m;
      for (int i=1;i<=m;i++)
      {
           cin>>t>>l>>r;
          if(t==1)
              {
              cout<<cum[r-1]-cum[l-2];
             }
          else
            {

            cout<<cum1[r-1]-cum1[l-2];
            }
          cout<<endl;
      }




    return 0;
}
