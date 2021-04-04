#include<iostream>
using namespace std;

int main ()
{
    int n,a=0 ;
    cin>>n;
    string d;
    cin>>d;
   for(int i=0;i<n;i++)
    {
        if(d[i]==d[i+1])
            ++a;
    }
    cout<<a<<endl;

return 0;
}
