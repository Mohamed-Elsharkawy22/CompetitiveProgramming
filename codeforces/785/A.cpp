#include<iostream>

using namespace std;
int main ()
{ int n,cnt=0;cin>>n;
 for(int i=0;i<n;i++)
 {
     string m;cin>>m;
     if(m=="Tetrahedron")
     {
         cnt+=4;
     }
      if(m=="Cube")
     {
         cnt+=6;
     }
      if(m=="Octahedron")
     {
         cnt+=8;
     }
      if(m=="Dodecahedron")
     {
         cnt+=12;
     }
      if(m=="Icosahedron")
     {
         cnt+=20;
     }
 }
 cout<<cnt;


    return 0;}

