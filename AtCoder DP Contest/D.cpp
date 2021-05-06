//(D) Knapsack-1
//(A)

#include <bits/stdc++.h>
using namespace std;

#define int long long 

const int MAXN = 1e5 + 10;

int dp[101][100001];
void solve(){
   int n, w;
   cin >> n >> w;

   int wt[n], v[n];
   for(int i=0; i<n; i++){
       cin >> wt[i] >> v[i];
   }

   for(int i=0; i<=n; i++){
   	dp[i][0] = 0;
   }  
   
   for(int j=0; j<=w; j++){
   	dp[0][j] = 0;
   }

   for(int i=1; i<=n; i++){
   	for(int j=1; j<=w; j++){
      if(wt[i-1] <= j){
      	dp[i][j] = max(dp[i-1][j-wt[i-1]] + v[i-1], dp[i-1][j]);
      }
      else 
      	dp[i][j] = dp[i-1][j]; 
   	}
   }

cout << dp[n][w] << endl;

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


