#include<iostream>
#include <assert.h>
using namespace std ;

int main()
{
    string n ,m ;int s1,s2 ;
    getline(cin,n);
    getline(cin,m) ;
    int a=n.size();
    int b=m.size ();
    assert(a==b) ;
    for (int i=0;i<a;i++)
        {
            s1=m[i];
         if(s1>=97)
          m[i]-=32 ;
        };
         for (int i=0;i<a;i++)
        { s2=n[i];
        if (s2>=97)
        n[i]-=32 ;
        };

            if(n>m)
                cout<<1<<endl;

      else if (n<m)
                cout<<-1<<endl;
                else
                    cout<<0<<endl;



 return 0;
}
