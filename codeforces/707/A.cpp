#include<iostream>
using namespace std ;
char arr[100][100];
int main()
{ bool fd=false;
    int n,m;cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
            if(arr[i][j]=='C'||arr[i][j]=='M'||arr[i][j]=='Y')
            {
           fd=true;

            }
        }

    }

    if(fd)
        cout<<"#Color";
    else
        cout<<"#Black&White";

   return 0;
}
