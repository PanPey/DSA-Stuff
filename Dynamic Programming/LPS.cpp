#include <bits/stdc++.h>
using namespace std;

int dp[1001];

int LPS(string a, int n)
{

   string b = reverse(a.begin(), a.end());
   
   for(int i=0; i<n+1; i++)
     {
     	for(int j=0; j<n+1; j++)
     	{
     		if(i==0 || j==0)
     			dp[i][j] = 0;
     	}
     }

     for(int i=1; i<n+1; i++)
     {
     	for(int j=1; j<n+1; j++)
     	{
     		if(a[i-1]==b[i-1])
     			dp[i][j] = 1 + dp[i-1][j-1];
     		else
     			dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
     	}
     }  

return dp[n][n];

}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc=1;
    //cin>>tc;
    
    while(tc--) {
       
       memset(dp, -1, sizeof(dp));

       string a;
       cin>>a;
       string b = reverse(a.begin(), a.end());
       
       int n = a.length(); 
       
   
       cout<<LPS(a,n);
       return 0;
     }  
