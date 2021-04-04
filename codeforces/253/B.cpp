#include<bits/stdc++.h>
using namespace std;
const int N=200005;
int arr1[N];
int mod=1e9+7;
typedef long long ll ;
int arr[N];
int n;

bool ok(int m){

    for(int i=m-1;i<n;i++){

        if(arr[i]<=2*arr[i-m+1])
        {
            return true;
        }
    }

    return false;
}


int bs(){
    int st=0,en=n;

    while(st<en){

        int mid=st+(en-st+1)/2;
        if(ok(mid))
            st=mid;
        else
            en=mid-1;

    }
    return st;
}



int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);


   cin>>n;

for(int i=0;i<n;i++)cin>>arr[i];

sort(arr,arr+n);


cout<<n-bs()<<endl;

  return 0;
}

