#include <iostream>
using namespace std;

int main()
{
   int n ,suma=0,sumd=0,sum1=0,sum2=0;
   char s ;
   cin>> n ;
   for (int i=0 ; i<n ;i++)
   {
       cin >> s ;
       if (s =='A')
       {
        suma = 1 ;
        sum1+=suma ;
       }
        if (s =='D')
        {
        sumd =1 ;
        sum2+=sumd ;
        }
        else
        {
            suma=0;
            sumd=0;
        }



   }
   if (sum1>sum2)
    cout << "Anton" ;
    else if (sum1==sum2)
        cout << "Friendship" ;
    else
    cout <<"Danik";

    return 0;
}

