#include<iostream>
using namespace std;
 
int main()
{
   char arr[16];
   int c;
   for(int i=0;i<16;i++)
   {
       cin>>arr[i];
   }
 
   for(int i=0;i<11;i++)
   { c=0;
       if(i==3||i==7)continue;
       if(arr[i]=='#')c++;
       if(arr[i+1]=='#')c++;
       if(arr[i+4]=='#')c++;
       if(arr[i+5]=='#')c++;
       if(c!=2){cout<<"YES";return 0;}
   }
   cout<<"NO";
   return 0;
}