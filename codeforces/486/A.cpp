#include<iostream>
#include<cmath>
using namespace std;

int main ()
{

  long long n;cin>>n;

 if(n%2==0)
 {
    cout<<n/2;
    return 0;
 }
 else
 {
     cout<<-1*((n/2)+1);
     return 0;
 }
    return 0;
}
