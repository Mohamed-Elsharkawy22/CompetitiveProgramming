#include <bits/stdc++.h>
using namespace std;

int main() {

 string m;cin>>m;
 int fst,cnt=0;

 if(m=="0")
 {
     cout<<0;
     return 0;
 }
 for(int i=0;i<m.size();i++)
 {

     if(m[i]=='1')
       {

        fst=i;
         break;
        }
 }

 for(int i=0;i<m.size();i++)
 {

     if(m[i]=='1')
       {cnt++;
        }
 }
 fst=m.size()-fst-1;

 if(fst%2==0&&cnt==1)
 {
     cout<<fst/2;}


 if(fst%2==1||cnt>1)
 {
     cout<<(fst/2)+1;
 }




 return 0;
}
