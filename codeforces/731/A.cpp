#include<iostream>
#include<cmath>
using namespace std;

int main ()
{
 string ss;
 cin>>ss;
   int n=ss.size();int a=0,b=0,sum1=0,c=0,d=0,f=0;
   if(n==1)
   {
       c=abs(97-ss[0]);
   if(c>=13)
   {
       d=abs(26-c);

   }
   else
    f=c;
   }

   for(int i=0;i<n-1;i++)
   {  c=abs(97-ss[0]);
   if(c>=13)
   {
       d=abs(26-c);

   }
   else
    f=c;

    a =abs(ss[i]-ss[i+1]);

   if (a>=13){

   b=abs(26-a);
   sum1+=b;
   }
   else
    sum1+=a;

   }
   cout<<sum1+d+f;





return 0;
}
