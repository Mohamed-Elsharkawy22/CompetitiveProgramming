#include<iostream>
#include<algorithm>
using namespace std ;
 int arr[102];
 bool proceed(int n,int m){
  return n>m;}
  int sum1;
int main()
{
   int n,sum=0; cin>>n;
   for(int i=0;i<n;i++)
   {
       cin>>arr[i];
       sum+=arr[i];
   }
   sort(arr,arr+n,proceed);

 for(int i=0;i<n;i++)
 {
     sum1+=arr[i];
     if(sum1>sum/2){
        cout<<i+1;
        break;}

 }

   return 0;
}
