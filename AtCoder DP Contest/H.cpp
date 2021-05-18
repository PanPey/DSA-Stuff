#include "bits/stdc++.h"
using namespace std;

#define int long long
const int INF = 1e9;
const int mod = 1e9+7;

int  dp[1001][1001];

void solve(){
  int h,w;
  cin >> h >> w;

  char a[h][w];
  for(int i=0; i<h; i++){
  	for(int j=0; j<w; j++){
  		cin >> a[i][j];
  	}
  }

  dp[0][0] = 1;

  for(int i=0; i<h; i++){
  	for(int j=0; j<w; j++){
        if(a[i][j] == '.'){
  		 if(i>0) dp[i][j] = (dp[i][j] + dp[i-1][j])%mod;
  		 if(j>0) dp[i][j] = (dp[i][j] + dp[i][j-1])%mod;
     }
    } 
  }
 
 cout << dp[h-1][w-1];

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


