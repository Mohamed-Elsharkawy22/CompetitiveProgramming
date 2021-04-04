#include<iostream>
using namespace std;

int main(){

int n , t, k,d, g;
cin>>n>>t>>k>>d;
g=(n+k-1)/k ;
if((d+t)<g*t)
{
   cout<<"YES";
}
else
    cout<<"NO";



return 0 ;
}
