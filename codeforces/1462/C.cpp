#include <bits/stdc++.h>
using namespace std;
typedef long long ll ;
const int N=100003;
const double eps=1e-6;
vector<int>v;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;cin>>t;
    fd:
    while(t--) {
        v.clear();
        int n;cin>>n;
        if(n>45) {cout<<"-1\n";
        goto fd;}
        int mx=9;

        while(n>0){
            v.push_back(min(mx,n));
            n-=mx;
            mx--;
        }
        for(int i=(int)v.size()-1;i>=0;i--)
            cout<<v[i];

        cout<<endl;
    }

    return 0;
}