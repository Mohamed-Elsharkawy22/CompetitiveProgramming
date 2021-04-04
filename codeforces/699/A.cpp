#include <bits/stdc++.h>
using namespace std;
int freq[200002];
int main()
{
 cin.sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;
    string m;cin>>m;
    bool fd=0;
    for(int i=0;i<t;i++)
    {
        cin>>freq[i];
    }

     int j;int ans=2000000003;
    for(j=0;j<t;j++)
    { if(m[j]=='R'&&m[j+1]=='L'){
    ans=min(ans,(freq[j+1]-freq[j])/2) ;
    fd=1;
    }
    else
        continue;
    }


    if(!fd)
        cout<<"-1";
        else
    cout<<ans;

return 0;
  }
