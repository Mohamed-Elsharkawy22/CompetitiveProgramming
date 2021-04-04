#include <bits/stdc++.h>
using namespace std;

vector<int> ar;
int n;
class segtree{  //note arr must be 1 based arr
public:
    int N;
    vector<int>segT,lazy;

    segtree(int p){ // size of ar must be a power of 2 + 1 (one-based)
        N =p-1;
        //lazy.resize((N<<1)); // no of nodes is 2N-1 but we add 1 to be 1 index
        segT.resize((N<<1));
        if(n%2==0)
        build(1,1,N,0);
        else{
            build(1,1,N,1);
        }
    }
    void build(int node,int l,int r,bool o) { //o (2n)
        if (l == r) {
            segT[node] = ar[l];
            return;
        }
            int mid = l + r >> 1;
            build(node << 1, l, mid,!o);
            build(node << 1 | 1, mid + 1, r,!o);

            if(o==1)
            segT[node] = segT[node << 1] | segT[node << 1 | 1];
            else{
                segT[node] = segT[node << 1]  ^ segT[node << 1 | 1];
            }

    }
    int query(int i,int j){
        return query(1,1,N,i,j);
    }
    int query(int node,int l ,int r,int i,int j){  // O(log n)
        if(i>r || j <l)
            return 0;
        if(i<=l && j>=r){
            return segT[node];
        }
//        int mid = l+r >> 1;
//        //propagate(node, l, r);
//        int ll=query(node<<1,l,mid,i,j);
//        int rr= query(node<<1|1,mid+1,r,i,j);
//        return ll*rr;
        return 0 ;
    }

    void updatePoint(int idx,int val,bool o){  // O(log n)
        int cur=idx+ N-1;
        segT[cur] = val;
        while(cur!=1){
            cur>>=1; //divide by 2 to get the parent
            if(o==1)
                segT[cur] = segT[cur << 1] | segT[cur << 1 | 1];
            else{
                segT[cur] = segT[cur << 1]  ^ segT[cur << 1 | 1];
            }
            o= !o;
        }
    }

//    void propagate(int node,int l,int r){ // o(1)
//        int mid=l+r>>1;
//        lazy[node<<1] += lazy[node];
//        lazy[node<<1|1] += lazy[node];
//        segT[node<<1] += lazy[node]*(mid-l+l);
//        segT[node<<1|1] += lazy[node] *(r - mid);
//        lazy[node]=0;
//    }

//    void updateRange(int i,int j,int val){
//        updateRange(1,1,N, i, j , val);
//
//    }
//    void updateRange(int node ,int l,int r,int i,int j,int val) {  //O(log n)
//        if(i>r || j <l)
//            return ;
//        if (i <= l && r <= j) { // if I took the whole node
//            lazy[node] += val;
//            segT[node] += val * (r - l + 1) * val;
//            return;
//        } else {
//            int mid = r + l >> 1;
//            propagate(node,l,r);
//            updateRange(node<<1,l,mid,i,j,val);
//            updateRange(node<<1|1,mid+1,r,i,j,val);
//            segT[node]=segT[node<<1]+segT[node<<1|1];
//        }
//
//    }
};
void solve() {

    int tt;
    cin >> n >> tt;
    int N = 1;
    N=1<<n;
//    while (N <= n) {
//        N <<= 1;   //padding
//    }
    N = int(N);
    ar.resize(N + 1, 0);
    for (int i = 1; i <= N; ++i) {
        cin >> ar[i];
    }

    segtree sg(N + 1);
    while (tt--) {
        int idx, va;
        cin >> idx >> va;
        sg.updatePoint(idx,va,1);
        cout << sg.query(1, N) << endl;
    }

}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);
    solve();
    return 0;
}
