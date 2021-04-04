#include<bits/stdc++.h>
using namespace std;
typedef long long ll;




int arr[300009];
vector<int>v;
int main()
{
    map<ll,int>freq;

    int n;cin>>n;
    ll sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        freq[arr[i]]++;
        sum += arr[i];

    }
    for(int i=0;i<n;i++)
    {
        ll r=(sum-arr[i]);
        if(r%2==0 && freq[r/2])
        {
            if(arr[i]==r/2 && freq[r/2]==1) continue;
            v.push_back(i);

        }

    }
    cout<<v.size()<<endl;

    for(int i:v)
        cout<<i+1<<" ";



    return 0;
}
