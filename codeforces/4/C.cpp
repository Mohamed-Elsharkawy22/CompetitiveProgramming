#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


map<string,int>mp;
int main()
{

    int n;cin>>n;

 while(n--){

     string m;cin>>m;
     if(mp[m]==0)
     {
         mp[m]++;
         cout<<"OK\n";
     } else{
         mp[m]++;
         cout<<m<<mp[m]-1<<endl;
     }

 }



    return 0;
}
