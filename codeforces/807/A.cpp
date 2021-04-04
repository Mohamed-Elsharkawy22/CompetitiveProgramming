#include<iostream>

int arr[1001][2];
using namespace std ;
 int main()

 { int max=4126;
      bool fd=false;
  int n;cin>>n;
 for(int i=0;i<n;i++)
 {
 for(int j=0;j<2;j++)
  {
     cin>>arr[i][j];
  }
 }
 for(int i=0;i<n;i++)
 {
 for(int j=0;j<2;j++)
  {
    if(arr[i][0]!=arr[i][1])
    {
    cout<<"rated";
    return 0;
    }

  }
 }


 for(int i=0;i<n;i++)
 {
     if(arr[i][0]<=max)
     {
         max=arr[i][0];
     }
     else
     {
        cout<<"unrated";
        return 0;
     }

 }
 cout<<"maybe";
   return 0;
}
