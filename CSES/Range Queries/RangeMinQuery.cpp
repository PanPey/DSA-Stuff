#include "bits/stdc++.h"
using namespace std;
 
int a[2*100005];
int seg[8*100005];

void buildSegmentTree(int index, int low, int high){
  if(low==high){
    seg[index] = a[low];
    return;
  }

  int mid = (low + high)/2;
  buildSegmentTree(2*index+1, low, mid);
  buildSegmentTree(2*index+2, mid+1, high);
  seg[index] = min(seg[2*index+1], seg[2*index+2]);

}

int query(int index, int low, int high, int l, int r){
 if(low>=l && high<=r){
  return seg[index];
 }

  if(high<l || low>r){
    return INT_MAX;
  }

    int mid = (low+high)/2;
    int left = query(2*index+1, low, mid, l, r);
    int right = query(2*index+2, mid+1, high, l, r);
    return min(left, right);
}
void solve() {
int n, q;
cin >> n >> q;
//int a[n], seg[4*n];
for(int i=1; i<=n; i++){
  cin >> a[i];
}

buildSegmentTree(1, 1, n);
 while(q--){
    int l, r; 
    cin >> l >> r;
    cout << query(1, 1, n, l, r) << endl; 
   }
}
 
int main()
{  
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);      
    int t=1;
    //cin >> t;
    while(t--){
      solve();   
  }
}

// TC---O(n) for buiding segment tree and O(logn) for answering quuery
// SC---O(4*n) ~ O(n)
