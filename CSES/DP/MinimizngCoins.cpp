#include "bits/stdc++.h"
using namespace std;
#define int               long long 
#define ld                long double
#define mod               1000000007
#define pb                push_back
#define all(x)            (x).begin(), (x).end()
#define rall(x)           x.rbegin(), x.rend()
#define rep(i,a,b)        for(int i=a; i<b; ++i)
#define per(i,a,b)        for(int i=b-1;i>=a;i--)
#define sz(x)             ((int)(x).size())
#define endl              '\n'
#define output_vector(A)  for (auto i: A) cout << i << " "; cout << '\n'

void __print(int x) {cerr << x;}
void __print(float x) {cerr << x;}
void __print(double x) {cerr << x;}
void __print(long double x) {cerr << x;}
void __print(char x) {cerr << '\'' << x << '\'';}
void __print(const char *x) {cerr << '\"' << x << '\"';}
void __print(const string &x) {cerr << '\"' << x << '\"';}
void __print(bool x) {cerr << (x ? "true" : "false");}

template<typename T, typename V>
void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}';}
template<typename T>
void __print(const T &x) {int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? "," : ""), __print(i); cerr << "}";}
void _print() {cerr << "]\n";}
template <typename T, typename... V>
void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}
#ifndef ONLINE_JUDGE
#define debug(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define debug(x...)
#endif

//const int inf = 1e9;

void solve(){

   int n, sum;
   cin >> n >> sum;

   vector<int>c(n);
   for(int &i : c) cin >> i;

   vector<int>dp(sum+1,1e9);

   dp[0] = 0;

   for(int i=1; i<=sum; i++){
     for(int j=0; j<n; j++){
      if(i>=c[j]){
        dp[i] = min(dp[i], dp[i-c[j]] + 1);
      }
     }

   }  
 
   
  if(dp[sum]!=1e9) cout << dp[sum];
  else cout << -1;

}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);      
                     
    int t=1;
    //cin >> t;

    while(t--){
      solve();
    }
}


