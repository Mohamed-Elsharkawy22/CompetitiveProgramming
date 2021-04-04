#include<iostream>

using namespace std ;
 int main()
 {
 char arr[32]="iqwertyuiopasdfghjkl;zxcvbnm,./";
 arr[32]='\n';
  char a ;cin>>a;
  string m; cin>>m;


for(int i=0;i<m.size();i++)
{
    for(int j=1;j<32;j++)
{
    if(a=='R')
    {
     if(m[i]==arr[j])
     cout<<arr[j-1];
    }
    else
    {
         if(m[i]==arr[j])
     cout<<arr[j+1];
    }
}
}

   return 0;
}
