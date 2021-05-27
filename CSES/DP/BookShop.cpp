#include "bits/stdc++.h"
using namespace std;
//#define int               long long 
#define ld                long double
#define mod               1000000007
#define pb                push_back
#define all(x)            (x).begin(), (x).end()
#define rall(x)           x.rbegin(), x.rend()
#define rep(i,a,b)        for(int i=a; i<b; ++i)
#define per(i,a,b)        for(int i=b-1;i>=a;i--)
#define sz(x)             ((int)(x).size())
#define vi                vector<int>
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
 
 
//int dp[1001][100001];
 
void solve(){
 
  int n, x;
  cin >> n >> x;
  int h[n], s[n];
 
  rep(i,0,n) cin >> h[i];
  rep(i,0,n) cin >> s[i];
 
 vector<vector<int>>dp(n+1, vector<int>(x+1, 0)); 
 
  rep(i,1,n+1){
    rep(j,0,x+1){
 
      if(h[i-1]<=j) dp[i][j] = max(dp[i-1][j], dp[i-1][j-h[i-1]] + s[i-1]);
      else dp[i][j] = dp[i-1][j];
    }
 
  }
    int ans = dp[n][x];
    cout << ans;
 
  //debug(ans);
 
  
 
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);      
                     
    int t=1;
    //cin >> t;
 
    while(t--){
      solve();
    }
}
 
