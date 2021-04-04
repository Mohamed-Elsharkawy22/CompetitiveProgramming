#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
const int N=10000006;
ll primes[N];
void sieve()
{ fill(primes, primes + N, 1);
    primes[0]=primes[1]=0;
    for(int i=2; i<=10000006;i++)
    {
        if(primes[i])
        {
            for(int j= i*2;j<=10000006;j+=i)
            {
                primes[j]=0;
            }
        }
    }

}
int main()
{


    int t;cin>>t;
    sieve();
    while(t--)
    {
        ll m;
        cin>>m;
       ll sq = sqrt(m);
        if(! (sq*sq==m) || m==1 )
        {
            cout<<"NO\n";
            continue;
        } else
        {
                m/=sq;
            if(m==1 || primes[m])
            {
                cout<<"YES\n";
            } else
            {
                cout<<"NO\n";
            }
        }


    }

    return 0;
}