#include<iostream>
using namespace std ;

int main()
{
    string m,n=" ";cin>>m;

    for(int i=0;i<m.size();i++)
    {
            if(m[i]=='W' && m[i+1]=='U' && m[i+2]=='B')
            {
                if(n==" ")
                {
                i+=2;
               }
               else{
                i+=2;
                n+=' ';

               }

            }
            else
                {
              n+=m[i];
               }
    }
    cout<<n;
   return 0;
}
