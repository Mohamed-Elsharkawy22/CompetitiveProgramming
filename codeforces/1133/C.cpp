#include <bits/stdc++.h>
using namespace std;

const int N=1000000;



int arr[N];
int main(){


    int n;cin>>n;

    for(int i=0;i<n;i++)
        cin>>arr[i];


sort(arr,arr+n);


    int ans=0;
int l=0,r=0;
while(l<n)
{
    while(r<n && arr[r]-arr[l] <= 5)
    {
         r++;
    }
    ans=max(ans,r-l);
     l++;
}

cout<<ans<<endl;

    return 0;
}