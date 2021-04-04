#include <bits/stdc++.h>
using namespace std;

int main()
{
int t;cin>>t;
while(t--)
{
int n;cin>>n;
vector<int>v;

for(int i=0;i<n;i++)
{int a;cin>>a;
    if(!i)
    {
      v.push_back(a);
      continue;
    }
    if( a < 0&& v.back() < 0|| a > 0 && v.back() > 0)
    {
        v.back() = max(a,v.back());
    }
    else
        v.push_back(a);

}
long long sum=0;
for(int i=0;i<v.size();i++)
{
    sum+=v[i];
}
cout<<sum<<endl;
}

return 0;
  }

