#include<iostream>
#include<string>
using namespace std ;

int main()
{
 string m;
 getline(cin,m) ;
 for(int i=0;i<m.size();i++)
 {
     if(m[i]=='{'||m[i]=='}'||m[i]==' '||m[i]==',')
        m[i]='0';
 }
 for(int i=0;i<m.size();i++)
 {
     for(int j=i+1;j<m.size();j++)
     {
         if(m[i]==m[j])
            {
                m[j]='0';
            }
     }
 }

 int a=0;
 for(int i=0;i<m.size();i++)
 {
    if(m[i]!='0')
        a++;
 }
 cout<<a;


 return 0;
 }

