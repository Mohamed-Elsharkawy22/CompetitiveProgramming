#include <bits/stdc++.h>
using namespace std;
typedef long long ll ;
const ll N=1000;
int freq[N];
int main(){
string m;cin>>m;

       if(m.size()<26){
           cout<<-1<<endl;
           return 0;
       }


    int i=-1;
       bool fdd=0;
       fd:i++;for(;i<=m.size()-26;){
             memset(freq,0,sizeof(freq));
           for(int j=i;j<i+26;j++){
               if(m[j]!='?'){
                   if(freq[m[j]-'A']!=0)
                       goto fd;
                   freq[m[j]-'A']++;
               }
           }
           fdd=1;
           break;
       }

if(fdd==0){
    cout<<-1<<endl;
}else{
    for(int v=0;v<i;v++){
        if(m[v]=='?')
            m[v]='A';
    }


    for(int j=i;j<i+26;j++){
        if(m[j]=='?'){
            for(char y='A';y<='Z';y++){
                if(freq[y-'A']==0){
                    m[j]=y;
                    freq[y-'A']++;
                    break;
                }
            }

        }}
    for(int b=i+26;b<m.size();b++)
        if(m[b]=='?')
        m[b]='A';
    cout<<m<<endl;
}


    return 0;
}
