#include<iostream>
#include<string>
using namespace std;
 int main ()
{ string s="0123456789";
int n ,m,cnt1=0,cnt2=0;
cin>>n>>m;
int fd=-1;

while(n--)
{
    string k ;cin>>k;
  for(int i=0;i<=m;i++)
  {
      fd=k.find(s[i]);
      if(fd!=-1)
      {
          cnt1++;
          fd=-1;
      }
  }
  if(cnt1>= m+1)
      cnt2++;


 cnt1=0;
}
cout<<cnt2<<endl;
return 0;
}
