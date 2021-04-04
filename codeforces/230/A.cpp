#include <bits/stdc++.h>
using namespace std;

int main()
{

 cin.sync_with_stdio(false);
    cin.tie(NULL);


 int s,n,a,b;cin>>s>>n;
 vector < pair<int,int> > vii;

 for(int i=0;i<n;i++)
 { cin>>a>>b;
     vii.push_back(make_pair(a,b));
 }
 sort(vii.begin(),vii.end());
for(int i=0;i<n;i++){
 if(s > vii[i].first)
 {
     s+=vii[i].second;
 }
 else{
    cout<<"NO";
return 0;}
}


cout<<"YES";
    return 0;
}
