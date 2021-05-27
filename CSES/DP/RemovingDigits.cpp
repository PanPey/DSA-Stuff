#include "bits/stdc++.h"
using namespace std;
#define int               long long 
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


const int MOD = 1e9+7;
const int maxN = 1e6;

int dp[maxN+1];


void solve(){

  int n;
  cin >> n;
  
  for(int i=1; i<=n; i++){
    dp[i] = 1e9;
    int x = i;

    while(x>0){
      dp[i] = min(dp[i], dp[i-x%10]+1);
      x /=10;
    }
  }
cout << dp[n];

}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);      
                     
    int t=1;
    //cin >> t;

    while(t--){
      solve();
    }
}




