#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll n,mp;
int needed[100006],has[100006];
bool ok(ll nums)
{
    ll mm=mp;
    for(int i=0;i<n;i++)
    {
        if(nums <= (has[i]+mm)/needed[i])
        {
            if(nums > (has[i])/needed[i])
                mm-=(nums*needed[i]-has[i]);

        } else
            return false;
    }
return true;

}
ll bs(ll st ,ll en )
{

    while(st<en)
    {
        ll mid=st+(en-st+1)/2;

        if(ok(mid))
        {
            st=mid;
        }else
            en=mid-1;

    }
   return st;

}

int main()
{
    cin>>n>>mp;
    for(int i=0;i<n;i++)
    {
        cin>>needed[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>has[i];
    }


cout<<bs(0,1e18)<<endl;


    return 0;
}