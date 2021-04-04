#include<iostream>
#include<algorithm>
using namespace std;
int arr[5001];
int main()
{ int n,a=0,b=0,c=0;cin>>n;
for(int i=0;i<n;i++)
{
    cin>>arr[i];
}
for(int i=0;i<n;i++)
{
    if(arr[i]==1)
    {
        a++;

    }
    if(arr[i]==2)
    {
        b++;
    }
    if(arr[i]==3)
    {
        c++;
    }

}
int e, d=min(a,b);
e=min(d,c);
 cout<< e <<endl;;


  int i=0;
  while (e!=0)
  {
    for(int i=0;i<n;i++){
      if(arr[i]==1)
      {  cout<<i+1<<" ";
      arr[i]=0;
        break;

      }}
      for(int i=0;i<n;i++){
       if(arr[i]==2)
        {arr[i]=0;
        cout<<i+1<<" ";
        break;

      }}
      for(int i=0;i<n;i++){
       if(arr[i]==3)
      {  arr[i]=0;
          cout<<i+1;

        break;

      }}
      cout<<endl;

      e--;
  }



    return 0;
}
