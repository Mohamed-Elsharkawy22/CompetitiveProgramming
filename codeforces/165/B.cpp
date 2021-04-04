#include<bits/stdc++.h>

using namespace std;
long long n,k;

bool ok(long long v)
{ long long x=v;
    long long b=1;
    long long lines=0;
    while(x/b)
    {
        lines+=x/b;

        b*=k;
    }

    return lines >=n ;
}


int main()
{

    cin>>n>>k;
 long long st=0;
    long long en =n;

    while(st < en)
    {
        int m=(st+en)/2;
        if(!ok(m))
            st=m+1;
        else
            en=m;
    }
cout<<st<<endl;


    return 0;
}
