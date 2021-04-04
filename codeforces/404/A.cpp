#include<iostream>
using namespace std;
char arr [301][301];
int main ()
{ int n;cin>>n;
for(int i=0;i<n;i++)
{
    for(int j=0;j<n;j++)
    {
        cin>>arr[i][j];
    }
}
char fst=arr[0][0],scd=arr[0][1];

if(fst==scd)
{
    cout<<"NO";
    return 0;

}
for(int i=0;i<n;i++)
{
    if(arr[i][i]!=fst){
        cout<<"NO";
        return 0;}
}



    for(int i=0;i<n;i++)
{
    for(int j=0;j<n;j++)
    {
        if(i==n-j-1)
        {
            if(arr[i][j]!=fst)
            {
                cout<<"NO";
                return 0;
            }
        }
            else if(j!=i)
            {
                if(arr[i][j]!=scd)
                {
                    cout<<"NO";
                return 0;
                }
            }
        }
    }


    cout<<"YES";

    return 0;
    }
