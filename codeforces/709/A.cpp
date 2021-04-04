#include<iostream>
using namespace std;
int arr[100000];
int main()
{
    int n,sm,sw,a=0,b=0;
    cin>>n>>sm>>sw;
    for(int i=0;i<n;i++)
    {
        cin>> arr[i];

        if(arr[i]<=sm){
            a+=arr[i];
            }
            if(a>sw)
            {
                b++;
                a=0;
            }
    }
    cout<<b;







return 0;
}
