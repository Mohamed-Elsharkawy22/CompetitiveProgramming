#include<iostream>
using namespace std;

int main ()
{
    int n,arr[100000];
cin>>n;
int i,a=0;
cin>>arr[0] ;

for (int i=1;i<n;i++)
{
    cin>>arr[i];
    if (arr[i]!=arr[0])
    {
        ++a ;
        arr[0]=arr[i];
    }
};
cout<<a+1<<endl;
return 0;
}
