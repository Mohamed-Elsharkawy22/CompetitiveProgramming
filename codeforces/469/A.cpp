#include<iostream>

int arr[1000];
using namespace std ;
 int main()
 {
   int n,p;cin>>n>>p;
   for(int i=1;i<=p;i++)
   { int in;cin>>in;
       arr[in]++;
   }
   int q;cin>>q;
   for(int i=1;i<=q;i++)
   { int in;cin>>in;
       arr[in]++;
   }

   bool fd=true;

   for(int i=1;i<=n;i++)
   {
       if(arr[i]<1)
       {
        fd=false;
        break;
        }

   }
   if(fd)
    cout<<"I become the guy.";
   else
    cout<<"Oh, my keyboard!";

   return 0;
}
