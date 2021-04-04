#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int n , k ;
int main()
{

cin>>n>>k;
 string e;

for(int i=0;i<k;i++)
{
    e+=(int)'a'+i;
}
int i=0,a=0;

while(i<::n){
        a++;
    cout<<e[i];
    ++i;
   if(i==k)
    {
        i=0;
    }
    if(a==n)
        break;
}

    return 0;
}
