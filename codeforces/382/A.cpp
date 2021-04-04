#include<iostream>
using namespace std;

int main()
{
   string m,n,z;
   getline(cin,m,'|');int Sm=m.size();
   getline(cin,n);int Sn=n.size();
   getline(cin,z);int Sz=z.size();
 int St=Sm+Sn+Sz;

if((Sn+Sm+Sz)%2==0&&abs(Sm-Sn)<=Sz)
{
    int k=0;
    if(Sm>Sn)
    { for(int i=Sm;i<St/2;i++)
    {
        m+=z[k++];
    }
    for(int j=Sn;j<St/2;j++)
    {
        n+=z[k++];
    }

    }
    if(Sm<Sn)
    {
    { for(int i=Sn;i<St/2;i++)
    {
        n+=z[k++];
    }
    for(int j=Sm;j<St/2;j++)
    {
        m+=z[k++];
    }

    }

    }
    if(Sm==Sn)
    {
  for(int i=0;i<Sz/2;i++)
  {
    m+=z[k++];
  }
  for(int i=k;i<Sz;i++)
 {
    n+=z[k++];
 }

    }

cout<<m<<"|"<<n;
}
else
    cout<<"Impossible";



    return 0;
}
