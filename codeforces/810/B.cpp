#include<bits/stdc++.h>
using namespace std;
 
 
 
 
 
vector< pair<int,int> >vii;
int main()
{
    int n,f;cin>>n>>f;
    for (int i = 0; i <n ; ++i) {
        int a,b;cin>>a>>b;
        vii.push_back({a,b});
    }
 
sort(vii.begin(),vii.end(),[](const pair<int,int > &p1,const pair<int ,int > &p2)
    {
    return (min(2*p1.first,p1.second)-min(p1.first,p1.second) > min(2*p2.first,p2.second)-min(p2.first,p2.second) )  ;
    }
);
 
 for(int i=0;i<n;i++)
 {
 
     if(f)
     {
         vii[i].first *=2;
         f--;
     }
 
     if(!f) break;
 }
 long long ans=0;
 for(int i=0;i<n;i++)
 {
     ans+=min(vii[i].first,vii[i].second);
 }
 cout<<ans<<endl;
    return 0;
}