#include <bits/stdc++.h>
using namespace std;
//dp[n+1][w+1] Better to use constraints for n,w......
int dp[1001][1001];

int knapsack(int w[], int v[], int W, int n)
{
      //Initialize 0th row and column to 0
      for(int i=0; i<n+1; i++)
       {
         for(int j=0; j<W+1; j++)
           if(i==0 && j==0) 
             dp[i][j] = 0;
        }
   

        for(int i=1; i<n+1; i++)
        {
            for(int j=1; j<W+1; j++)
                 if(w[i-1] <= j ) //if wt of ith item is less than W then we've two options either to choose it or not....
                  dp[i][j] = max(v[i-1] + dp[i-1][j-w[i-1]], dp[i-1][j]);

                 else //else we have only one choice that is we can't select that item.......
                  dp[i][j] = dp[i-1][j];
        }
 
   return dp[n][W];
    
}

int main()
{

   memset(dp, 0, sizeof(dp));

   int w[] = {10,20,30};
   int v[] = {60,100,120};
   int W = 50;
   int n = sizeof(w)/sizeof(w[0]);

   cout<<knapsack(w,v,W,n);
   
}
