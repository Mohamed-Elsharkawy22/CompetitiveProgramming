#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
string m4="",m1,m2,m3;
 
cin>>m1>>m2>>m3;
 
m4+=m1+m2+m3;
int a=0,b=0,c=0;
for(int i=0;i<m4.size();i++)
{
   if(m4[i]=='A'&&m4[i+1]=='>')
   {
       a++;
   }
   else if(m4[i]=='A'&& m4[i-1]=='<')
   {
       a++;
   }
    if(m4[i]=='B'&&m4[i+1]=='>')
   {
       b++;
   }
   else if(m4[i]=='B'&&m4[i-1]=='<')
   {
       b++;
   }
   if(m4[i]=='C'&&m4[i+1]=='>')
   {
       c++;
   }
   else if(m4[i]=='C'&&m4[i-1]=='<')
   {
       c++;
   }
 
}
if(a==2&&b==1&&c==0)
{
    cout<<"CBA";
    return 0;
}
else if(a==2&&b==0&&c==1)
{
    cout<<"BCA";
    return 0;
}
else if(a==1&&b==2&&c==0)
{
    cout<<"CAB";
    return 0;
}
 
else if(a==0&&b==2&&c==1)
{
    cout<<"ACB";
    return 0;
}
else if(a==0&&b==1&&c==2)
{
    cout<<"ABC";
    return 0;
}
else if(a==1&&b==0&&c==2)
{
    cout<<"BAC";
    return 0;
}
else
    cout<<"Impossible";
 
 return 0;
}