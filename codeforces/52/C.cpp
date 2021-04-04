#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<ll>ar;
/// first, i misunderstood the problem but now i think i understand
class segtree{  //note arr must be 1 based arr
public:
    int N;
    vector<ll>segT,lazy;

    segtree(int t){ // size of array must be a power of 2 + 1 (one-based)
        N =t-1;

        // no of nodes is 2N-1 but we add 1 to be 1 index
        segT.resize(N<<1);
        lazy.resize(N<<1);
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
    ll query(int i,int j){
        return query(1,1,N, i, j);
    }
    ll  query(int node,int l ,int r,int i,int j) {  // O(log n)
        if (r < i || j < l)
            return 1e18;

        if (i <= l && j >= r) {
            return segT[node];
        }

            int mid = l + r >> 1;
            propagate(node, l, r);
            ll y = query(node << 1, l, mid, i, j);
            ll u = query(node << 1 | 1, mid + 1, r, i, j);
            return min(u, y);

        }

    void propagate(int node,int l,int r){ // o(1)

        lazy[node<<1] += lazy[node];
        lazy[node<<1|1] += lazy[node];

        segT[node<<1] += lazy[node];
        segT[node<<1|1] += lazy[node];
        lazy[node]=0;

    }
    void updateRange(int i,int j,int val){
        updateRange(1,1,N, i, j , val);

    }
    void updateRange(int node ,int l,int r,int i,int j,int val) {  //O(log n)
        if(i>r || j <l)
            return ;
        if (i <= l && r <= j) { // if I took the whole node
            lazy[node] += 1ll*val;
            segT[node] += 1ll*val ;
            return;
        } else {
            int mid = r + l >> 1;
            propagate(node,l,r);
            updateRange(node<<1,l,mid,i,j,val);

            updateRange(node<<1|1,mid+1,r,i,j,val);

            segT[node]=min(segT[node<<1],segT[node<<1|1]);
        }

    }



};


int main(){
 int N=1;
    int n;cin>>n;

    while(N < n){
        N <<= 1;   //padding
    }

ar.resize(N+1);
    for (int j = 1; j <=n ; ++j) {
        cin>>ar[j];
    }

    for(int i=n+1;i<=N;i++){
        ar[i]=1e18;
    }

    segtree sg(N+1);
    int q;cin>>q;
    while(q--){
        int a,b,v;
        cin>>a>>b;
        char c;
        c=getchar();
        if(c=='\n'){
             if(a>b)
             cout<<min(sg.query(a+1,N),sg.query(1,b+1))<<endl;
             else{
                 cout<<sg.query(a+1,b+1)<<endl;
             }
         }else{
            cin>>v;
            if(a>b) {
             sg.updateRange(a+1,N,v);
             sg.updateRange(1,b+1,v);
            }else{
                sg.updateRange(a+1,b+1,v);
            }
         }

    }

    return 0;
}


