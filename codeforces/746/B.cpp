#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
int n;cin>>n;
 
deque<char>dq;
string m;cin>>m;
bool fd=1;
if(n%2==0)
{
for(int i=0;i<n;i++)
{
    if(fd)
  dq.push_front(m[i]);
  else
  dq.push_back(m[i]) ;
  fd =!fd;
}
}
else
{
    for(int i=0;i<n;i++)
{
    if(fd==0)
  dq.push_front(m[i]);
  else
  dq.push_back(m[i]) ;
  fd =!fd;
}
}
 for(int i=0;i<n;i++)
 {
     cout<<dq.front();
    dq.pop_front();
 }
 
 return 0;
}
