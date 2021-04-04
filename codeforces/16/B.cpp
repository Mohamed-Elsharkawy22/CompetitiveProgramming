#include <bits/stdc++.h>
using namespace std;
int arr[1002];
int main()
{

 cin.sync_with_stdio(false);
    cin.tie(NULL);

    int k,m,a,b,sum=0;
    cin>>k>>m;
  vector < pair<int ,int> >p(m+2);
    for(int i=0;i<m;i++)
    { cin>>a>>b;
     p.push_back({b,a});
    }
    sort(p.rbegin(),p.rend());

    for(int i=0;i<m;i++)
    {
        if(k>=p[i].second)
        {
            sum+=p[i].second*p[i].first;
            k-=p[i].second;
            p[i]={0,0};
            }
            else if(k<p[i].second)
            {
                sum+=k*p[i].first;
                k=0;
                break;
            }
    }

    cout<<sum;

         return 0;
}
