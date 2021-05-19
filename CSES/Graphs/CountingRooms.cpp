#include "bits/stdc++.h"
using namespace std;
 
//#define int long long 
const int INF = 1e7;
const int mod = 1e9+7;

int n, m, ans;
vector<vector<bool>> vis;
vector<pair<int, int>> moves = {{-1,0}, {1,0}, {0,-1}, {0,1}};
 
//1- isValid Function
bool isValid(int x, int y){
	if(x<0 || x>= n || y<0 || y>= m)
	  return false;
	if(vis[x][y])
	  return false;
 
return true;	    
}
 
//3- dfs for grid problems
void dfs(int i, int j){
	vis[i][j] = true;
 
	for(auto p : moves){
	 if(isValid(i+p.first, j+p.second)){
	   dfs(i+p.first, j+p.second);
     }
  }
}
 
//4- Connected Components Count
void ConnectedComponents(){
	for(int i=0; i<n; i++){
	for(int j=0; j<m; j++){
	if(!vis[i][j]){
	  dfs(i, j);
	  ++ans;
 
	 }
	}
  }
}

void solve(){
 
 /*
 I/O
 
  ########
  #..#...#
  ####.#.#
  #..#...#
  ########
 
 */
 
 
  //int n, m;
  cin >> n >>m;
  vis.resize(n);
  
  for(int i = 0; i < n; ++i)
	{
		vis[i].resize(m);
	}
 
  //char a[n][m]; 
  for(int i=0; i<n; i++){
  	for(int j=0; j<m; j++){
  	   char c;
  	 	cin >> c;
  		if(c == '#')
  			vis[i][j] = true;
  	}
  }
 
 
 
ConnectedComponents();
cout << ans << endl;
 
 
}
 
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);      	
                     
    int t=1;	
    //cin >> t;
    while(t--){
      solve();   
  }
}
