#include<bits/stdc++.h>
using namespace std;
typedef long long ll;





int main(){
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);

long long ans=0;
   int n,m;cin>>n>>m;

   int si,sj;
   cin>>si>>sj;

   int k;cin>>k;
   while(k--){

       int a,b;

       cin>>a>>b;

      // ans1=ans;

       int c=0;
   if(a>0 && b>0){
       c=min((n-si)/a , (m-sj)/b);
       si+=(c*a);
       sj+=(c*b);
   }else if(a>0 && b <0){

          c=min(((1-sj)/b),(n-si)/a);
          si+=(c*a);
          sj+=(c*b);

   }else if(a < 0 && b>0){
       c=min(((1-si)/a),(m-sj)/b);
       si+=(c*a);
       sj+=(c*b);

   }else if(a>0 &&b==0){
       c= (n-si)/a;
       si+=(c*a);
   }else if(a<0 && b==0){
       c=((1-si)/a);
       si+=(c*a);
   }else if(a==0 && b>0){
       c=((m-sj)/b);
       sj+=(c*b);
   }else if(a==0 && b<0){
       c=((1-sj)/b);
       sj+=(c*b);
   }else if(a<0 && b<0){
       c=min(((1-sj)/b),((1-si)/a));
       sj+=(c*b);
       si+=(c*a);

   }

       ans+=c;

       }


   cout<<ans<<endl;


    return 0;
}
