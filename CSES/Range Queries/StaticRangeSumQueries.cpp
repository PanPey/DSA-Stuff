#include "bits/stdc++.h"
using namespace std;
#define int               long long int 
#define ld                long double
#define mod               1000000007
#define vi                vector<int>
#define vvi               vector<vector<int>>  
#define pb                push_back
#define all(x)            (x).begin(), (x).end()
#define rall(x)           x.rbegin(), x.rend()
#define rep(i,a,b)        for(int i=a; i<b; ++i)
#define repd(i,a,b)        for(double i=a; i<b; ++i)
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


//useful for sorting vector of string lengthwise. Just use sort(first, last,  compare)
bool compare(const std::string& a, const std::string& b){
  return (a.size() < b.size()); 
}

vector <int> pre(200001);

void solve() {

int n, q, a, b;
cin >> n >> q;

vi v(n);
rep(i,0,n){
  cin >> v[i];
}

pre[0] = 0;

rep(i,0,n){
  pre[i+1] = pre[i] + v[i];
}



while(q--){

  cin >> a >> b;
  
  int ans = pre[b] - pre[a-1];

  cout << ans << endl;

}

}

signed main()
{
 
     ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);      
                     
    int t=1;
     //cin >> t;
    while(t--){
      solve();   
  }
}
