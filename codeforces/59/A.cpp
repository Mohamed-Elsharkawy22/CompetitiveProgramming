#include<iostream>
#include<string>
using namespace std ;

int main()
{
    string n ;
    cin>>n ;

    int a=n.size(),s=0,b=0;
    for(int i=0;i<a;i++)
    {
        if (n[i]>=97 )
    s++ ;
    else
        b++ ;
    }

    if(b>s)
       {
           for (int i=0;i<a;i++)
         {
         if (n[i]>=97)
         n[i]-=32;

         }
         cout<<n<<endl;

       }

          else if(b<s || s == b)
       {
           for (int i=0;i<a;i++)
         {
         if (n[i]<97)
         n[i]+=32;

         }
         cout<<n<<endl;

       };

       return 0;
}
