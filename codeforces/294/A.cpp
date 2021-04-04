#include<iostream>
using namespace std;
int arr[100] ;

int main()
{ int n ;cin>>n;
for (int i=0;i<n;i++)
{
    cin>>arr[i];
}
int sh;cin>>sh;
for(int i=0;i<sh;i++)
{
    int x,y ;
    cin>>x>>y;
    --x;

     if(x!=0)
     {
         arr[x-1]+=y-1;

     }
    if(x!=n-1)
    {
        arr[x+1]+=arr[x]-y;
    }
    arr[x]=0;

}
for(int i=0;i<n;i++)
{
    cout<<arr[i]<<endl;
}


return 0;
}
