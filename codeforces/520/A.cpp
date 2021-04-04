#include<iostream>
using namespace std;
char a[100];
int main()
{

int n;cin>>n;
for(int i=0;i<n;i++)
{
    char b; cin>>b;
    if(b<97)
    {
    b+=32;
    }
    a[b-'a']++;

}
bool fd=true;
 for(int i=0;i<26;i++)
{
    if(a[i]<1){
        fd=false;
        break;}
}
if(fd)
    cout<<"YES";
    else
    cout<<"NO";


return 0;
}


