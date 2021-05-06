//(A) --- Frog1

#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e5 + 10;

int dp[100001];
void solve(){
   int n;
   cin >> n;
   int h[n];
   for(int i=0; i<n; i++){
      cin >> h[i];
   }

   dp[0] = 0;
   dp[1] = abs(h[1] - h[0]);
   
   for(int i=2; i<=n; i++){
    	dp[i] = min(dp[i-1] + abs(h[i] - h[i-1]), dp[i-2] + abs(h[i] - h[i-2]));
   }

cout << dp[n-1] << endl;

}


int main()
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


