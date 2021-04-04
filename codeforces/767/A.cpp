#include<iostream>
int arr[100000];


using namespace std ;
 int main()
 {
     bool arr1[100000];
 int n;cin>>n;

 for (int i=1;i<=n;i++)
 {
   arr1[i]=false;
 }
 for (int i=1;i<=n;i++)
 {
     cin>>arr[i];
 }
 int c=n;
 for(int i=1;i<=n;i++)
 {
     arr1[arr[i]]=true;
     while(arr1[c]&&c>0)
     {
         cout<<c--<<" ";
    }
     cout<<endl;
 }

   return 0;
}
