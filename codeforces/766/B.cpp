#include<iostream>
#include<algorithm>
using namespace std;

const int N=100006;



int arr[N];
int main()
{


    int n;cin>>n;
for(int i=0;i<n;i++)
cin>>arr[i];
sort(arr,arr+n);
for(int i=0;i<n-2;i++)
{
    if(arr[i]+arr[i+1] > arr[i+2])
    {
        cout<<"YES\n";
        return 0;
    }
}

cout<<"NO\n";

    return 0;
}