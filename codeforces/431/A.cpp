#include<iostream>
using namespace std;

int main ()
{
  int v1,v2,v3,v4,sum1=0;
  cin>>v1>>v2>>v3>>v4;
  string s;
  cin>>s;
  int ss=s.size();
  

 for (int i=0;i<ss;i++)
  {
      if(s[i]== '1')
        sum1+=v1;

     else if (s[i]=='2')
      sum1+=v2;

     else if (s[i]=='3')
        sum1+=v3;

      else
        sum1+= v4 ;

  }
  cout <<sum1<<endl;
return 0;
}
