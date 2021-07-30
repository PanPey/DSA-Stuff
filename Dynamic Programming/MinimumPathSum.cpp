class Solution {
public:
    
    int mini(vector<vector<int>>& grid, int i, int j, vector<vector<int>> &dp, int m, int n){
       //base condition
        if(i== m-1 && j== n-1)
            return grid[i][j];

        // out of bounds check
         if(i>=m || j>=n)
            return INT_MAX;
     
        // if cache contains mini path sum till that point, use cached value  
        if(dp[i][j] !=-1)
            return dp[i][j];
        
       // recursively go right and down and get min path sum  
        int ans = min(mini(grid, i+1, j, dp, m, n), mini(grid, i, j+1, dp, m, n)) + grid[i][j];
        dp[i][j] = ans;
        return ans;   
         
    }
    
    
    int minPathSum(vector<vector<int>>& grid) {
       
      int m = grid.size();
      int n = grid[0].size();
        
      vector<vector<int>>dp(m+1, vector<int>(n+1, -1));
      
      return mini(grid, 0, 0, dp, m, n);
        
    }
};
