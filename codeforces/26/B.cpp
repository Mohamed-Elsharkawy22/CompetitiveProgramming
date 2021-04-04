#include <bits/stdc++.h>
using namespace std;

int main()
{

 cin.sync_with_stdio(false);
    cin.tie(NULL);
stack<int>st;
string m;cin>>m;
int ans=0;
for(int i=0;i<m.size();i++)
{
    if(m[i]=='(')
        st.push(m[i]);
    else if(m[i]==')'&&!st.empty())
    {
        st.pop();
        ans+=2;
    }
}

cout<<ans;
         return 0;
}
