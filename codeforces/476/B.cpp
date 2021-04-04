#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

string m,n;
int ans=0;
int mans=0;
int tans=0;
void solve(int i){

    if(i==n.size())
    {
        ans++;
        int anss=0;
        for(int i=0;i<n.size();i++)
        {
            if(n[i]=='+')anss++;
            else
                anss--;
        }

        if(anss==mans){
            tans++;
        }
        return;
    }



    if(n[i]=='?'){
       n[i]='+';
        solve(i+1);
         n[i]='?';

         n[i]='-';
        solve(i+1);
         n[i]='?';
    }else{
        solve(i+1);
    }

}


int main(){

   cin>>m>>n;
int u=0;
cout<<fixed<<setprecision(12);
    for(char i : m){
       i=='+'?mans++:mans--;
    }

if(n.find('?') == string::npos){
    for(char i : n){
        i=='+'?u++:u--;
    }
    if(u == mans){
        cout<<1.000000000000<<endl;
    } else{

        cout<<0.000000000000<<endl;
    }
}else{

    solve(0);
    cout<<1.0*tans/ans<<endl;
}




    return 0;
}