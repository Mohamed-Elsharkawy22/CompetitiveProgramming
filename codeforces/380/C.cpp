#include <bits/stdc++.h>
using namespace std;


struct nod{
    int o,c,cnt;

};
// if u took ( )  1 0 0 + 0 1 0  -> 1 1 1 ->  0 0 1  last one remove the brackets represented by it.

class segtree{  //note arr must be 1 based arr
public:
    int N;
    vector<nod>ar,segT;

    segtree(vector<nod>&arr){ // size of array must be a power of 2 + 1 (one-based)
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

        int c  = min(segT[node<<1].o,segT[node<<1|1].c);

          segT[node].cnt = segT[node<<1].cnt+segT[node<<1|1].cnt + c;
          segT[node].o =   segT[node<<1].o+segT[node<<1|1].o - c;
          segT[node].c =  segT[node<<1].c+segT[node<<1|1].c - c;

    }
    int query(int i,int j){
        return query(1,1,N,i,j).cnt;
    }
    nod query(int node,int l ,int r,int i,int j){  // O(log n)
        if(i>r || j <l)
            return {0,0,0};
        if(i<=l && j>=r){
            return segT[node];
        }
        int mid=l+r>>1;
        nod le = query(node<<1,l,mid,i,j) ;
        nod ri= query(node<<1|1,mid+1,r,i,j);

        nod ret={0,0,0};
        int c= min(le.o,ri.c);

        ret.cnt = le.cnt+ri.cnt + c;
        ret.o=le.o+ri.o - c;
        ret.c=le.c+ri.c - c;
        return ret;
    }


};


int main(){
 int N=1;
    string m;
    cin>>m;
    int q;cin>>q;
    int n=m.size();
    while(N < n){
        N <<= 1;   //padding
    }
    vector<nod>arr(N+1);
    for (int j = 0; j <n ; ++j) {
         if(m[j]=='(')
             arr[j+1]={1,0,0};
         else{
             arr[j+1]={0,1,0};
         }
    }
    for(int i=n+1;i<=N;i++){
        arr[i]={0,0,0};
    }

    segtree sg(arr);

    while(q--){
        int l,r;cin>>l>>r;
        cout<<sg.query(l,r)*2<<endl;

    }


    return 0;
}
