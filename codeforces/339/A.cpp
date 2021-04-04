#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;

int main()
{  char a[100];
    string m;
    getline(cin,m);
    int j=0;
    for(int i=0;i<m.size();i+=2)
    {
        a[j]=m[i];
        j++;
    }
    int b=j;
       sort(a,a+b) ;

       for(int i=0;i<b-1;i++)
       {
           cout<<a[i]<<'+';


       }
       cout<<a[b-1];

}
