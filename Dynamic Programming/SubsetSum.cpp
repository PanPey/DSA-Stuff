#include <bits/stdc++.h>
using namespace std;

bool dp[1001][1001];

bool SubsetSum(int arr[], int S, int n)
{

    for(int i=0; i<=n; i++)
      dp[i][0] = true;

    for(int i=1; i<=S; i++)
      dp[0][i] = false;

 
     
    for(int i=1; i<=n; i++)
      {
      	for(int j=1; j<=S; j++)
      	{
      		
      			if(arr[i-1]<=j)
      				dp[i][j] = dp[i-1][j] || dp[i-1][j-arr[i-1]];
      			else
      				dp[i][j] = dp[i-1][j];
      		
      	}
      } 
    
return dp[n][S];

}


int main()
{
	int n = 5;

   int arr[n] = {2,5,6,7,8};

   int S = 9;

   cout<<SubsetSum(arr, S, n); 

}
