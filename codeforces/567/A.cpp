#include<iostream>
#include<cmath>
using namespace std;

int arr[100001];
int main()
{ int n;cin>>n;
   for(int i=0;i<n;i++)
   {
       cin>>arr[i];
    }


  int minn=abs(arr[0]-arr[1]);
  int maxx =abs(arr[0]-arr[n-1]);
 cout<<minn<<" "<<maxx<<endl;


   for(int i=1;i<n;i++)
   {

     if(i<n-1)
     {
     minn=min(abs(arr[i]-arr[i-1]),abs(arr[i]-arr[i+1]));}
     else
        minn=abs(arr[i]-arr[i-1]);

       maxx=max(abs(arr[i]-arr[0]),abs(arr[i]-arr[n-1]));

        cout<<minn<<" "<<maxx<<endl;;

   }

 return 0;
}
