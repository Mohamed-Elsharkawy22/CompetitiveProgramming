#include <bits/stdc++.h>
using namespace std;
typedef long long ll ;
const ll N=1000000;
int freq[N],freq2[N];
int main(){
string m,n;cin>>m>>n;

        int j=0;
        int cnt=0;
    for(char i : m){
          freq[int(i)]++;
        if(i==n[j]){
            cnt++;
            j++;
        }
        if(cnt==n.size())
            break;
    }

if(cnt==n.size()){
    cout<<"automaton\n";
    return 0;
}



   sort(m.begin(),m.end());
    sort(n.begin(),n.end());

    if(m==n){
        cout<<"array\n";
        return 0;
    }
    for(char i : n) {
    freq2[int(i)]++;
    }

bool fd2=0;
   for(char i : n){
       if(freq2[int(i)]>freq[int(i)]){
           fd2=1;
           break;
       }
   }
    if(fd2==0){
        cout<<"both\n";
        return 0;
    }

    cout<<"need tree\n";





    return 0;
}
