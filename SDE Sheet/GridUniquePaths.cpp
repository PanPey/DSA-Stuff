// Brute force - Recursive sol.... will give TLE.
class Solution {
public:
    int rec(int m, int n, int i, int j){
        if(i==m-1 && j==n-1) return 1;
        if(i>=m || j>=n) return 0;
        else 
            return rec(m, n, i+1, j) + rec(m, n, i, j+1);
    }
    
    int uniquePaths(int m, int n) {
     
        return rec(m, n, 0, 0);
    }
};
// TC---> exponential
// SC---> exponential due to recursion stack

//-----------------------------------------

// DP Solution
class Solution {
public:
 
    int DP(int m, int n, int i, int j, vector<vector<int>>&dp){
        if(i==m-1 && j==n-1) return 1;
        if(i>=m || j>= n) return 0;
        
        if(dp[i][j]!=-1) return dp[i][j];
        else 
            return dp[i][j] = DP(m,n,i+1,j, dp) + DP(m,n,i,j+1, dp);
    }
    
    
    int uniquePaths(int m, int n) {
      
        vector<vector<int>>dp(m+1, vector<int>(n+1, -1));
        return DP(m,n,0,0,dp);
    }
};
// TC--->O(n*m)
// SC--->O(n*m)

//-----------------------------------------

// Most Efficient Sol
// Using Combinatorics
class Solution {
public:
    
    long long ncr(int n, int r) {
    long long ans = 1;
    int i;
    for(i = 1; i <= r; i++) {
        ans *= n - r + i;
        ans /= i;
    }

    return ans;
}  
    int uniquePaths(int m, int n) {
       
        int N = n + m - 2;
        int r = n - 1;
        return ncr(N, r);
    }
};
//TC--->O(n)
//SC--->O(1)
