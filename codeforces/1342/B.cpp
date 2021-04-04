#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;cin>>t;
  while(t--)
  {
      string m;cin>>m;

      bool zeros=0,ones=0;
      for(int i=0;i<m.size();i++)
      {
          if(m[i]=='1')
          {
              ones=1;
          }
          else
            zeros=1;
      }
      if(ones&&!zeros)
      {
          cout<<m<<"\n";
      }
      else if(!ones&&zeros)
      {
          cout<<m<<"\n";
      }
      else
      {
          for(int i = 0;i < 2 *m.size();i++)
          {
              if(i%2)
              {
                  cout<<"0";
              }
              else
                cout<<"1";
          }
          cout<<"\n";
      }


  }
return 0;
  }
