#include <iostream>

using namespace std;

int main()
{
   int n,t,b;
    cin>>n>>t;
    b=7-t;
    bool fd=true;
    for(int i=0;i<2*n;i++)
    {
        int j;cin>>j;
        if(j==t||j==b)
        {
            fd=false;

        }

    }
if(fd)
    cout<<"YES";
else
    cout<<"NO";

return 0;
}
