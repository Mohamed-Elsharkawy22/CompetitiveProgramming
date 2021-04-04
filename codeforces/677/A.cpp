#include <iostream>

using namespace std;

int main()
{
    int n ,hh ,hs,sumhs=0 ,sum=0;
    cin >> n >> hh ;

    for(int i=0;i<n;i++)
    {
        cin >>hs ;
        if(hs>hh)
            sumhs =2 ;
        else
            sumhs =1 ;
        sum +=sumhs ;
    }
    cout << sum<<endl;

    return 0;
}
