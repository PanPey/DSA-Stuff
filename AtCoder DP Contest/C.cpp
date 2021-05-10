//Thanks UG for an amazing explanation

#include "bits/stdc++.h"
using namespace std;

#define int long long int 

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


int mat[100000][3];
int dp[100000][3];

void solve(){
   
 int n;
 cin >> n;

 for(int i=0; i<n; i++){
 	for(int j=0; j<3; j++){
 		cin >> mat[i][j];
 	}
 }

dp[0][0] = mat[0][0]; 
dp[0][1] = mat[0][1]; 
dp[0][2] = mat[0][2]; 
 
for(int i=1; i<n; i++){
		dp[i][0] = mat[i][0] + max(dp[i-1][1], dp[i-1][2]); 
		dp[i][1] = mat[i][1] + max(dp[i-1][0], dp[i-1][2]);
		dp[i][2] = mat[i][2] + max(dp[i-1][0], dp[i-1][1]);

}   

 int ans = max({dp[n-1][0], dp[n-1][1], dp[n-1][2]});
 cout << ans <<endl;	

}


signed main()
{
    #ifndef ONLINE_JUDGE
    freopen("Input.txt", "r", stdin);
    freopen("Output.txt", "w", stdout);
    freopen("Error.txt", "w", stderr);
    #endif // ONLINE_JUDGE

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);      
                     
    int t=1;
    //cin >> t;
    while(t--){
      solve();   
  }
}


