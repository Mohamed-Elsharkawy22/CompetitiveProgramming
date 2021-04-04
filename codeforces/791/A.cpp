#include <iostream>
using namespace std ;
int main ()
{
    int a=0,b=0;
    cin>>a>>b;
    int i=1;
    for(i=1 ; a<=b ;i++)
    {
          a*=3;
        b*=2;
    }

    cout <<i-1<<endl;


    return 0;
    }



