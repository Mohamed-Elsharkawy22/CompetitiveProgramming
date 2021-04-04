#include <iostream>

using namespace std;

int main()
{
    string m;cin>>m;
    int a =(m[0]-'0');
    if(a<9&&a>4)
        cout<<9-a;
    else
        cout<<a;
    for(int i=1;i<m.size();i++)
    {
        int w=(m[i]-'0');
        if(w>4)
        cout<<9-w;
        else cout<<w;

    }
    return 0;
}
