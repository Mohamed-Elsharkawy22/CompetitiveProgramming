#include<bits/stdc++.h>

using namespace std;

const int N=1000005;
int arr[N];

int main()
{

    int n,k;cin>>n>>k;
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
        if(i<=k)
            sum+=arr[i];
    }

    int t=1,b=sum;
    for(int i=2;i<=n-k+1;i++)
    {
        sum +=arr[i+k-1]-arr[i-1];
        if( sum < b)
        {
            b=sum;
            t=i;

        }
    }
    cout<<t<<endl;




    return 0;
}


