#include "bits/stdc++.h"
using namespace std;

#define int long long int
#define mod 1000000007

// *************************************************************************************************************

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

// *************************************************************************************************************

const int inf = 1e9;
vector<int>dp(100001, inf);

void solve(){
  int n, k;
  cin >> n >> k;

  int h[n]; 
  for(int i=0; i<n; i++) 
  	 cin >> h[i];

  dp[0] = 0;
 
     for(int i=0; i<n; i++){
     	for(int j=i+1; j<=i+k; j++){
     		if(j<n){
     			dp[j] = min(dp[j], dp[i]+abs(h[i] - h[j]));
     		}
     	}
     }
 
       cout << dp[n-1] << endl;
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


