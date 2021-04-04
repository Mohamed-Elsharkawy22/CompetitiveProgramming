#include<iostream>
using namespace std;
int arr[100000];
 
int main()
 {
     bool fd=false;
    int n;cin>> n;
    if (n==1)
        fd=true;
    for (int i=0;i<n;i++)
    {
        char a;cin>>a;
        arr[a-'a']++;
    }
    if(fd==false)
    {
    for (int i=0;i<26;i++)
    {
        if (arr[i]>1)
    {
        fd=true;
        break;
    }
 
    }}
    if(fd)
        cout<<"YES";
     else
       cout <<"NO";
 
    return 0;
}