#include <bits/stdc++.h>
using namespace std;
int main()
{
 cin.sync_with_stdio(false);
    cin.tie(NULL);

  long long  l,r;cin>>l>>r;
  if(l&2!=0)
      l++;


      if(abs(l-r)>=2)
        cout<<l<<" "<<l+1<<" "<<l+2;
        else
        cout<<"-1";

return 0;
  }
