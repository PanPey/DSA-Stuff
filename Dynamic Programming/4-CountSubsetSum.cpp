#include <bits/stdc++.h>
using namespace std;

int dp[1001][1001];

int SubsetSum(int arr[], int S, int n)
{

    for(int i=0; i<=n; i++)
      dp[i][0] = 1;

    for(int i=1; i<=S; i++)
      dp[0][i] = 0;

 
     
    for(int i=1; i<=n; i++)
      {
        for(int j=1; j<=S; j++)
        {
          
            if(arr[i-1]<=j)
              dp[i][j] = dp[i-1][j] + dp[i-1][j-arr[i-1]];
            else
              dp[i][j] = dp[i-1][j];
          
        }
      } 
    
return dp[n][S];

}


int main()
{
  int n = 6;

   int arr[n] = {2,3,5,6,8,10};

   int S = 10;

   cout<<SubsetSum(arr, S, n); 

}