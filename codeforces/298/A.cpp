#include <bits/stdc++.h>
using namespace std;
int n,r,l;
int main() {
cin>>n;

string m;cin>>m;
for(int i=0;i<=n-1;i++)
{
    if(m[i]!='.')
    {
        r=i;
        break;
    }
}
for(int i=n-1;i>=0;i--)
{
    if(m[i]!='.')
    {
        l=i;
        break;
    }
}

if( m[r] == 'R' && m[l] == 'R' )
{
    cout<< r+1<<" "<< l+2;
}
else if( m[r] == 'L' && m[l] == 'L')
{
    cout<<l+1<<" "<<r;
}
else
{
    for(int i=r;i<n;i++)
    {
         if(m[i] =='L')
        {
            l=i;
            break;
        }
    }

    cout<<r+1<<" "<<l;

}

	return 0;
}
