#include<iostream>

long long arr[100000];
using namespace std;


int main ()
{
long long n,mid,p;cin>>n>>p;
mid=n/2;
if(n%2==0)
{
    if(p>mid)
    {
        cout<<(p-mid)*2;
        return 0;
    }
    else
    {
        cout<<2 * p -1 ;
        return 0;
    }
}
else
    {
    if(p>(mid+1))
       {
           cout<<2*(p-(mid+1));
           return 0;
       }
       else{
        cout<<2 *p -1;
        return 0;
       }

}

    return 0;
}
