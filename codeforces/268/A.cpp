#include<iostream>
using namespace std ;

int main()
{ int n;
cin>>n;
    int arr[100][100],a=0;
    for(int i=0;i<n;i++)
        for(int j=0;j<2;j++)
       cin>>arr[i][j];

     for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
    {
       if(arr[i][0]==arr[j][1])
            a++;
    }

    }
    cout<<a;
return 0;
}
