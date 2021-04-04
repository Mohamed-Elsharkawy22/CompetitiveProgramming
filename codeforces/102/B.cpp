#include <bits/stdc++.h>
using namespace std;

int main() {

string m;cin>>m;
if(m.size()<=1)
{
    cout<<0;
return 0;
}
int cnt=0,x=10;
while(x>9)
{
    x=0;
    for(int i=0;i<m.size();i++)
    {
        x+=(m[i]-'0');
    }
    m = to_string(x);
    cnt++;
}

cout<<cnt;

 return 0;
}
