#include<iostream>
using namespace std;

int main()
{
    int d,b=0;
    long long  n,x;
    cin>>n>>x;
    char a;
    for(int i=0;i<n;i++)
        {
        cin >> a>>d;
        if (a=='+')
        x+=(long long)d;
        else
            {
            if(x>=d)
            x-=(long long)d;
            else
           b++;

        }

    }
    cout<<x<<" "<<b;


 return 0;
}
