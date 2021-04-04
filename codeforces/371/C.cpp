#include <bits/stdc++.h>
using namespace std;
typedef long long ll ;
int has[1000000];
int price[4];
map< char , int >needed ;
 
ll mon;
string pat = "BSC";
bool ok(ll nums)
{
    ll c=mon;
    for(int i=0;i<3;i++ )
    {
 
        if(nums * needed[pat[i]] > has[i] )
        {
            if(((nums * needed[pat[i]] - has[i]) ) <= c/price[i] )
            {
                c -= (price[i] * (nums * needed[pat[i]] - has[i]));
            }else
                return false;
        }
    }
 
    return true ;
 
}
 
ll bs(ll st,ll en)
{
    while (st<en) {
        ll mid = st + (en - st + 1) / 2;
        if (ok(mid))
        {
            st=mid;
        }else
            en=mid-1;
    }
    if(ok(st))
        return st;
    else
        return 0;
 
 
}
 
 
int main()
{
 
    string m;cin>>m;
 
    for(int i=0;i<m.size();i++)
    {
 
        needed[m[i]]++;
    }
 
    for(int i=0;i<3;i++)
    {
        cin>>has[i];
    }
    for(int i=0;i<3;i++)
    {
        cin>>price[i];
    }
    cin>>mon;
 
    cout<<bs(0 ,1e15)<<endl;
 
 
 
 
    return 0;
}