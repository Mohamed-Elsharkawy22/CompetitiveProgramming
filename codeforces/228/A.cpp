#include<iostream>
using namespace std;

int main()

{
     long long int arr[4] ,a=0;
     for (int i=0;i<4;i++)
     {
         cin>>arr[i];
     }
       for(int i=0;i<3;i++){
         for(int j=i+1;j<4;j++)
         {
             if(arr[i]==arr[j])
                a++;


         }
         }
                 if(a>3)
                    cout<<3;
                    else if(a==3)
                        cout<<2;
                    else
                      cout <<a;


  return 0;
}
