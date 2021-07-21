class Solution {
public:
   
int n, m, ans;
int vis[301][301];
vector<pair<int, int>> moves = {{-1,0}, {1,0}, {0,-1}, {0,1}};
//Valid Path Checker Function
bool isValid(int x, int y, vector<vector<char>>& g){
	if(x<0 || x>= n || y<0 || y>= m)
	  return false;
	if(vis[x][y])
	  return false;
 
return true;	    
}
 
//DFS for grid general template
void dfs(int i, int j, vector<vector<char>>& g){
	vis[i][j] = 1;
 
	for(auto p : moves){
	 if(isValid(i+p.first, j+p.second, g)){
	   dfs(i+p.first, j+p.second, g);
     }
  }
}
    
    int numIslands(vector<vector<char>>& g) {        
        n = g.size();
        m = g[0].size();
        
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(g[i][j] == '0')
                    vis[i][j] = 1;
                
            }
        }
        
    for(int i=0; i<n; i++){
	for(int j=0; j<m; j++){
	if(!vis[i][j]){
	  dfs(i, j, g);
	  ++ans;
 
	 }
	}
  }
        return ans;
    }
};
