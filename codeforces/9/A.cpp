#include<iostream>
using namespace std;

int main()
{
    int n,m ;
    cin>>n>>m;
  int a=  max(n,m);

double b =6-a+1 ;
double c =b/6;


 if(c==0)
 {
     cout<<"0/1";
 }
  else if (c==1)
 {
     cout<<"1/1";
 }




 else if(b==3){
    cout <<"1/2";}

   else  if (b==2)
    {
        cout <<"1/3";
    }
    else if (b==1)
        cout<<"1/6";
    else if (b==4)
        cout<<"2/3";
   else if(b==5)
        {
        cout<<"5/6";
        }





return 0;
}
