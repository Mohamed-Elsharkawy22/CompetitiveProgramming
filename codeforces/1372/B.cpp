#include <bits/stdc++.h>
using namespace std;
 
vector<int>divi;
 
void generate_div(int n)
{    int i;
    for(i=1;i*i<n;i++)
    {  if(n%i==0)
        divi.push_back(i),divi.push_back(n/i);
    }
 
    if(i*i==n)
    divi.push_back(i);
}
 
int main()
{
 
    int t;cin>>t;
    while(t--)
    { divi.clear();
        int n;cin>>n;
        generate_div(n);
sort(divi.begin(),divi.end());
int gf=divi[divi.size()-2];
 
cout<<gf<<" "<<n-gf<<endl;
 
 
    }
 
 
    return 0;
}