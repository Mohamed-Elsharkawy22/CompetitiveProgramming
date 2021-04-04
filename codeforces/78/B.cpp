#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
string m2="",m1="GBIV";
 
 int n;cin>>n;
cout<<"ROY";
n-=3;
int i=0;
while(n>0)
{
    m2+=m1[i++];
    if(i>3)i=0;
    n--;
}
 
cout<<m2;
 return 0;
}
