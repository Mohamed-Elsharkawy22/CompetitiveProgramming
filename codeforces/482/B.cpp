#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
class segtree{  //note arr must be 1 based arr
public:
    int N;
    vector<ll>segT,lazy;
    segtree(int t){ // size of array must be a power of 2 + 1 (one-based)
        N =t-1;
        // no of nodes is 2N-1 but we add 1 to be 1 index
        segT.resize(N<<1,0);
        lazy.resize(N<<1,0);

    }

    ll query(int i,int j){
        return query(1,1,N, i, j);
    }
    ll  query(int node,int l ,int r,int i,int j) {  // O(log n)
        if (r < i || j < l)
            return ~0;

        if (i <= l && j >= r) {
            return segT[node];
        }

            int mid = l + r >> 1;
        propagate(node,l,r);
        return query(node << 1, l, mid, i, j) & query(node << 1 | 1, mid + 1, r, i, j);

        }

    void propagate(int node,int l,int r){ // o(1)

        lazy[node<<1] |= lazy[node];
        lazy[node<<1|1] |= lazy[node];

        segT[node<<1] |= lazy[node];
        segT[node<<1|1] |= lazy[node];
        lazy[node]=0;

    }
    void updateRange(int i,int j,int val){
        updateRange(1,1,N, i, j , val);

    }
    void updateRange(int node ,int l,int r,int i,int j,int val) {  //O(log n)
        if(i>r || j <l)
            return ;

        if (i <= l && r <= j) {
            lazy[node] |= val;
            segT[node] |= val ;
            return;
        } else {
            int mid = r + l >> 1;
            propagate(node,l,r);
            updateRange(node<<1,l,mid,i,j,val);
            updateRange(node<<1|1,mid+1,r,i,j,val);

            segT[node] |= segT[node<<1] & segT[node<<1|1];
        }

    }



};
tuple<int,int,int>q[100002];

int main(){
 int N=1;
    int n,m;cin>>n>>m;

    while(N < n){
        N <<= 1;   //padding
    }
        segtree sg(N+1);

    for (int k = 0; k <m ; ++k) {
        int i,j,v;
        cin>>i>>j>>v;
        q[k]={i,j,v};
        sg.updateRange(i,j,v);
    }
    bool fd=1;
    for (int k = 0; k <m ; ++k) {

      if(sg.query(get<0>(q[k]),get<1>(q[k]))!=get<2>(q[k])){
         cout<<"NO\n";
              fd=0;
         break;
      }

    }
if(fd){
    cout<<"YES\n";
    for (int i = 1; i <=n; ++i) {
        cout<<sg.query(i,i)<<" ";
    }
}

    return 0;
}


