#include <bits/stdc++.h>
using namespace std;

const int N=1000000;
int n,s;int cst[N];
vector<int>arr;
int anss[N];
long long ok(int k)
{  vector<long long>oj(n);



    for(int i=0;i<n;i++)
    {
        oj[i]=arr[i]+1ll*(i+1)*k;
    }



    long long sum=0;
    sort(oj.begin(),oj.end());


    for(int i=0;i<k;i++)
    {
        sum+=oj[i];
    }

    return sum;
}

int bs()
{
    int st=1,en = n;
    int ans=-1,ans2=0;
    while(st<=en)
    {
        int mid=st+(en-st+1)/2;

        if(ok(mid)<=s) {
            st = mid + 1;
            if(ok(mid) > ans2 ){
                ans2=ok(mid);
                ans=mid;
            }
        }
        else
            en=mid-1;
    }
    return ans;
}
int main(){


    cin>>n>>s;

    for(int i=0;i<n;i++)
    {
        int a;cin>>a;
        arr.push_back(a);
    }


    int ans=bs();
    if(~ans)
        cout<<ans<<" "<<ok(ans)<<endl;
    else
        cout<<"0 0\n";

    return 0;
}