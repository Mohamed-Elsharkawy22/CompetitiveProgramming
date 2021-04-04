#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin>>n;
string m; cin>>m;

string out="" , k="GRB";

int ans=INT_MAX;

sort( k.begin() , k.end() );
do{
int cnt=0;
  for(int i = 0; i < n ;i++)
  {
      if(m[i] != k[i % 3])
      {
          cnt++;
      }
  }
  if(cnt < ans)
  {
  ans = cnt;
  out = k;
  }
}while( next_permutation( k.begin() , k.end() ) );

cout<<ans<<"\n";

for(int i=0 ;i<n ;i++)
{
   cout<<out[i % 3];
}



    return 0;
}
