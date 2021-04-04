#include <iostream>
using namespace std;
int main()
{
cin.sync_with_stdio(false);
    cin.tie(NULL);
    int n;cin>>n;

    for(int i=0;i<n;i++)
    {
    int k,p,l=0;cin>>k>>p;

    cout<<((p-k)%p+p)%p<<"\n";


    }



    return 0;
}
