#include "bits/stdc++.h"
using namespace std;
using namespace chrono;

#define int              long long int 
#define ld               long double
#define mod              1000000007
#define pb               push_back
#define vi               vector<int>
#define all(x)           (x).begin(), (x).end()
#define rall(x)          x.rbegin(), x.rend()
#define rep(i,a,b)       for(int i=a; i<b; ++i)
#define per(i,a,b)       for(int i=b-1;i>=a;i--)
#define sz(x)            ((int)(x).size())
#define endl             '\n'
#define output_vector(A) for (auto i: A) cout << i << " "; cout << '\n'

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
void inout()
{
    #ifndef ONLINE_JUDGE
    freopen("Input.txt", "r", stdin);
    freopen("Output.txt", "w", stdout);
    freopen("Error.txt", "w", stderr);
    #endif // ONLINE_JUDGE
}

const int MAXN = 1e5 + 10;
const int INF = 2*1e9;
int dp[MAXN];

void solve(){
   
    int n;
    cin >> n;
    int h[n];
    rep(i,0,n) {
        cin >> h[i];
    } 
    dp[0] = 0, dp[1] = abs(h[1] - h[0]); 
    for(int i=2; i<=n; i++){
        dp[i] = min(dp[i-1] + abs(h[i] - h[i-1]), dp[i-2] + abs(h[i] - h[i-2]));
    }
  cout << dp[n-1] << endl;
}

signed main()
{
   #ifndef ONLINE_JUDGE
    auto begin = high_resolution_clock::now();
   #endif

   ios_base::sync_with_stdio(false);
   cin.tie(nullptr); cout.tie(nullptr);      
   inout();                     
   int t=1;
   //cin >> t;
   while(t--){
    solve();   
  }

  #ifndef ONLINE_JUDGE
    auto end = high_resolution_clock::now();
  //  cout << "\nExecution time: " << duration_cast<milliseconds>(end - begin).count() << " ms" << endl;
  #endif

}
