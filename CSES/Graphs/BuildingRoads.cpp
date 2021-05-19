#include "bits/stdc++.h"
using namespace std;
 
#define int long long 
const int INF = 1e7;
const int mod = 1e9+7;
 
vector<int>adj[100001];
int vis[100001];
 
void dfs(int node){
	vis[node] = 1;
 
	for(int child : adj[node]){
		if(!vis[child]){
			dfs(child);
		}
	}
}
 
 
void solve(){
  int n, m, a, b;
  cin >> n >> m;
 
  for(int i=0; i<m; i++){
  	cin >> a >> b;
  	adj[a].push_back(b);
  	adj[b].push_back(a);
  }
 
  int cc = 0;
  vector<int>ans;
  for(int i=1; i<=n; ++i){
  	if(!vis[i]){
  		dfs(i);
  		++cc;
  		ans.push_back(i);
  	}
  }   
 
cout << cc-1 << endl;
 
if(cc>1){
	int u = ans[0];
	int v;
	for(int i=1; i<cc; i++){
		v = ans[i];
		cout << u << " " << v << endl;
		u = v; 
	}
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
