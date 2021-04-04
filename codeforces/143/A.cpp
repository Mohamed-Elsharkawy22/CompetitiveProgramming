#include<iostream>
using namespace std;

int main()
{
    int r1,r2,c1,c2,d1,d2;
    cin>>r1>>r2>>c1>>c2>>d1>>d2;

    int x=(r1-d2+c1)/2;
    int y =(c2-r2+d2)/2;
    int z =c1-x;
    int p=c2-y;
    if(x>0&&y>0&&z>0&&p>0&&x!=y&&x!=z&&x!=p&&y!=z&&y!=p&&z!=p&&x<=9&&y<=9&&z<=9&&p<=9)
    {
        cout <<x<<" "<<y<<endl;
        cout<<z<<" "<<p;
    }
    else
        cout <<"-1";

    return 0;
}
