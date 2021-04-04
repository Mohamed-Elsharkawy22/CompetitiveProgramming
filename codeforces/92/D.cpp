#include <bits/stdc++.h>
using namespace std;



class segtree{  //note arr must be 1 based arr
public:
    int N;
    vector<int>ar,segT;

    segtree(vector<int>&arr){ // size of array must be a power of 2 + 1 (one-based)
        N =(int) arr.size()-1;
        ar = arr;             // no of nodes is 2N-1 but we add 1 to be 1 index
        segT.resize(N<<1);
        build(1,1,N);
    }

    void build(int node,int l,int r){ //o (n)
        if(l==r){
            segT[node] = ar[l];
            return;
        }
        int mid= l+r >> 1;

        build(node<<1,l,mid);
        build(node<<1|1,mid+1,r);

    segT[node]=min(segT[node<<1|1],segT[node<<1]);
    }
    int query(int i){
        return query(1,1,N,ar[i]);
    }
    int  query(int node,int l ,int r,int value){  // O(log n)
          if(l==r){
              return l;
          }
        int mid=l+r>>1;

        if(segT[node<<1|1]<value){
            return query(node<<1|1,mid+1,r,value);
        }else if(segT[node<<1]<value){
            return query(node<<1,l,mid,value);
        }else{
            return -1;
        }

    }


};


int main(){
 int N=1;
    int n;cin>>n;
    while(N < n){
        N <<= 1;   //padding
    }
    vector<int>arr(N+1);

    for (int j = 1; j <=n ; ++j) {
        cin>>arr[j];
    }

    for(int i=n+1;i<=N;i++){
        arr[i]=1e9;
    }

    segtree sg(arr);

    for (int j = 1; j <=n ; ++j) {
        cout<<max(sg.query(j)-j-1,-1)<<endl;

    }


    return 0;
}
