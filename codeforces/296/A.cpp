#include<iostream>
using namespace std;
int arr[101],arr1[1001];
int main()
{
cin.sync_with_stdio(0);
    cin.tie(0);
int n;cin>>n;
for(int i=0;i<n;i++)
{
    cin>>arr[i];
    arr1[arr[i]]++;
}
for(int i=0;i<1001;i++)
{
    if(arr1[i]>(n+1)/2)
    {
        cout<<"NO";
        return 0;
    }
}
cout<<"YES";
    return 0;
}