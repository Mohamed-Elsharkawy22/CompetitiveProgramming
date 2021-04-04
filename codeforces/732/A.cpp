#include<iostream>
using namespace std;

int main()

{ int k,n;
cin >>k >>n ;

    for(int i=1;i<=10;i++)
    {
        if((i*k)%10==0||(i*k)%10==n){
        cout <<i;
        break;
        }

    }

  return 0;
}
