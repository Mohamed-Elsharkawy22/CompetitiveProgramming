#include <bits/stdc++.h>
using namespace std;
 
 
int n,mp;
int needed[1006],has[1006];
bool ok(int nums)
{
    int mm=mp;
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
int bs(int st ,int en )
{
 
    while(st<en)
    {
        int mid=st+(en-st+1)/2;
 
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
 
 
cout<<bs(0,1e9)<<endl;
 
 
    return 0;
}