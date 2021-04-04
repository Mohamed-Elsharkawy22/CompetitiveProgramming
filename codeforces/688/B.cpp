#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<char>st;
 cin.sync_with_stdio(false);
    cin.tie(NULL);
   string m;cin>>m;
    cout<<m;

   for(int i=0;i<m.size();i++)
   {
       st.push(m[i]);
   }
   for(int i=0;i<m.size();i++)
   {
       cout<<st.top();
       st.pop();
   }
return 0;
  }
