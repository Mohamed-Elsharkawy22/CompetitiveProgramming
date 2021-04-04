#include <bits/stdc++.h>
using namespace std;

int main() {

 int n,cnt=0;
 cin>>n;
 while (n)
 {
     if(n%2)
     {
         cnt++;
     }
     n/=2;
 }

cout<<cnt;

 return 0;


}
