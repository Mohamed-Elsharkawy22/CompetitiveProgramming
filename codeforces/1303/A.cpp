#include <bits/stdc++.h>
using namespace std;
int freq[5];
int freq2[5];
int main()
{
 cin.sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;
    while(t--)
    {
        string m;cin>>m;
        int i;
        for(i=0;i<m.size();i++)
        {
            if(m[i]=='1')
                break;
        }
        int j;
        for(j=m.size()-1;j>=0;j--)
        {
            if(m[j]=='1')
                break;
        }
        int cnt=0;
        for(int k=i;k<=j;k++)
        {
            if(m[k]=='0')
                cnt++;
        }
        cout<<cnt<<endl;
    }
return 0;
  }