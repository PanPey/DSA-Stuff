#include <bits/stdc++.h>
using namespace std;

bool dp[1001][1001];

bool EqualSum(int arr[], int n)

{



	int sum = 0;
	 int S = sum/2;
	for(int i =0; i<=n; i++)
		sum += arr[i];
 
   if(sum%2!=0)
   	return false;

 else{

   


    for(int i=0; i<=n; i++)
    	dp[i][0] = true;

    for(int j=1; j<=n; j++)
    	dp[0][j] = false;

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
      }  

    return dp[n][S];    
}



int main()
{
     int n = 4;
    int arr[n] = {2,4,3,3};

    cout<<EqualSum(arr, n);

}