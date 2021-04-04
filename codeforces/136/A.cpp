#include<iostream>
using namespace std;
 int arr[100],arr1[100],arr2[100];
int main()
{
    int n; cin>>n;
     for(int i=0;i<n;i++)
        arr1[i]=i+1;


    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
    for(int j=0;j<n;j++)
        {
    if(arr[i]==arr1[j])
        arr2[j]=i+1;
        }
    }

    for(int j=0;j<n;j++)
    cout<<arr2[j]<<" ";



    return 0;
}
