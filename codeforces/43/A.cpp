#include<iostream>
#include<algorithm>
using namespace std ;
 string arr[100];
 int arr1[2];
int main()
{
 int n;cin>>n;
 for(int i=0;i<n;i++)
 {
     cin>>arr[i];
 }
 sort (arr,arr+n);


 for(int i=0;i<n;i++)
 {
     int cnt=0;
 for(int j=i;j<n&&arr[j]==arr[i];j++)
 { cnt++;
 }
 if(i==0)
 {
 arr1[0]=cnt;
 }else{
 arr1[1]=cnt;}

    i=i+cnt-1 ;

 }


 if(arr1[0]>=arr1[1])
 {
    cout<<arr[0];
 }
 else
    for(int i=0;i<n;i++)
 {
     if(arr[i]!=arr[i+1])
        cout<<arr[i+1];
 }


   return 0;
}
