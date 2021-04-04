#include <bits/stdc++.h>
using namespace std;

int main()
{
   int t; int n;cin>>t;
    while(t--)
    { int sk=2;

    cin>>n;
    while(1)
    {    sk*=2;
        if(n%(sk-1)==0)
        {
            cout << n / (sk-1)<<"\n";
            break;
        }

    }

    }

return 0;
  }

