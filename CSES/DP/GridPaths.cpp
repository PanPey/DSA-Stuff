#include "bits/stdc++.h"
using namespace std;

#define int long long
const int INF = 1e9;
const int mod = 1e9+7;

int  dp[1001][1001];

void solve(){
  
  int n;
  cin >> n;
  char a[n][n];
  for(int i=0; i<n; i++){
  	for(int j=0; j<n; j++){
  		cin >> a[i][j];
  	}
  }  

  dp[0][0] = 1;

  for(int i=0; i<n; i++){
  	for(int j=0; j<n; j++){
  	  if(a[i][j] == '.'){
  		if(i>0) 
  		 dp[i][j] = (dp[i][j] + dp[i-1][j])%mod;
  		if(j>0) 
  		 dp[i][j] = (dp[i][j] + dp[i][j-1])%mod;
  	 }
  	}
  }
  
 if(a[0][0] == '*')
 	cout << 0;
 else cout << dp[n-1][n-1];

}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);      	
                     
    int t=1;
//    cin >> t;
    while(t--){
      solve();   
  }
}


