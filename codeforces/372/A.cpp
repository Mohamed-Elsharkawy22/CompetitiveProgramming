#include<bits/stdc++.h>
using namespace std;


const int N=5e5 +3;

int arr[N];
int main()
{
    int n;cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int t=0,i,j;
    for(i=0 , j=n/2  ; i < n/2 && j >=0  && j < n; )
    {

            if(arr[j]/2 >= arr[i])
            {   i++;
                j++;
                t++;
            }else{

                j++;

            }
    }


    cout<<n-t<<endl;

    return 0;
}