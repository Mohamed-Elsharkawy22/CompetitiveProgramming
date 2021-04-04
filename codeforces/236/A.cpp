#include<iostream>
using namespace std ;

int main ()
{
    string n ;
    cin>>n;
    int a=n.size();
    int b=a;
      for (int j=0;j<a;j++)
      {
    for (int i=0;i<a;i++)
    {
        if(n[j]==n[i]&&j>i)
        {
           b=b-1;
           break;
        }

    }
      }

    if (b%2==0)
        cout<<"CHAT WITH HER!"<<endl;
    else
        cout <<"IGNORE HIM!"<<endl;

    return 0;
}
