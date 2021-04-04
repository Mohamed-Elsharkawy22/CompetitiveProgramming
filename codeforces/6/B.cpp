#include <bits/stdc++.h>
using namespace std;
char a[102][102];
int main()
{ int n,m;
cin>>n>>m;char c;cin>>c;
set<char> s;
for(int i=0;i<n;i++)
{
    for(int j=0;j<m;j++)
    {
        cin>>a[i][j];
    }
}
   for(int i=0;i<n;i++)
{
    for(int j=0;j<m;j++)
    {
        if(a[i][j]==c)
        {
            if(i-1>=0&&a[i-1][j]!=c&&a[i-1][j]!='.')
            {
                s.insert(a[i-1][j]);
            }
             if(i+1<n&&a[i+1][j]!=c&&a[i+1][j]!='.')
            {
                s.insert(a[i+1][j]);
            }
             if(j-1>=0&&a[i][j-1]!=c&&a[i][j-1]!='.')
            {
                s.insert(a[i][j-1]);
            }
            if(j+1<m&&a[i][j+1]!=c&&a[i][j+1]!='.')
            {
                s.insert(a[i][j+1]);
            }


        }
    }
}

   cout<<s.size();



return 0;
  }
