#include "bits/stdc++.h"
using namespace std;

#define int long long 
#define ld long double
#define mod 1000000007

int n;
void preCompute(){
	//nothing here
	cin >> n;
    vector<int>dp(n+1,0);
    dp[0] = 1;
    for(int i=1; i<=n; i++){
    	for(int j=1; j<=6; j++){
    		if(j>i) continue;
    		dp[i] = (dp[i] + dp[i-j])%mod;
    	}
    }
cout << dp[n];
}

void solve(){
	//int n;
	//cin >> n;

}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int t=1;
    //cin >> t;
    while(t--){
      // solve();
    	preCompute();
  }
}
