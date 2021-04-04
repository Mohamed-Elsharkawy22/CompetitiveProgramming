#include <iostream>
using namespace std ;
int main ()
{
   int n=0,i=0 ;
   cin >> n;

   for (int j=0 ;j<n ;j++)
   {
        int sum=0 ;
       int m,a,b ;
       cin >> m>>a>>b ;
       sum =m+a+b ;
       if (sum >= 2)
        i+=1 ;
   }

  cout << i ;
    return 0;
    }



