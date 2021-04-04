#include<bits/stdc++.h>
using namespace std;
typedef long long ll;




vector<pair<double ,int > >p;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout<<fixed<<setprecision(2);
    int n,t1,t2,k;
    cin>>n>>t1>>t2>>k;

  for(int i=1;i<=n;i++){

      int a,b;cin>>a>>b;
     double t=max(((a*t1)-(a*t1*(k/100.0))+b*t2),((b*t1)-(b*t1*(k/100.0))+a*t2));
p.emplace_back(-t,i);
  }
sort(p.begin(),p.end());


for(int i=0;i<p.size();i++){
    cout<<p[i].second<<" "<<-p[i].first<<endl;
  }



    return 0;
}
