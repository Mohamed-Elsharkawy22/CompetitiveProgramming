#include <bits/stdc++.h>
using namespace std;
typedef long long ll ;
const int N=100006;

map<char,int>freq;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;cin>>t;
    while(t--){
        string m;cin>>m;
        int cnt=0;
        freq.clear();
        for(int i=0;i<m.size();i++)
        {
            if(m[i]=='('){
                freq['(']++;

            }else if(m[i]==')' && freq['(']!=0){
                cnt++;
                freq['(']--;
            }
            if(m[i]=='['){
                freq['[']++;

            }else if(m[i]==']' && freq['[']!=0){
                cnt++;
                freq['[']--;
            }
        }
        cout<<cnt<<endl;
    }





    return 0;
}