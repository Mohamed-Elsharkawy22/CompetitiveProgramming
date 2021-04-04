#include<iostream>
using namespace std;

int main()
{int i=0,j=0;
    string n,m ;
    cin>>n>>m;
    int s=m.size();


    while(j<s)
    {
         if(m[j]==n[i]){
            i++;
            j++;}
            else
                j++;
    }

    cout<< i+1;



return 0;
}
