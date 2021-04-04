#include<iostream>

using namespace std;


int main()
{ string n,m;
cin>>n>>m;
if(n==m)
    cout<<"-1";
else if(n.size()>m.size())
    cout<<n.size();
else
   cout<<m.size();
 return 0;
}
