#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;

int dp[1001][1001];

int LCS(string s1, string s2, int n, int m){
       
    if(n==0 || m==0)
    	return 0;

    if(dp[n][m]!=-1)
    	return dp[n][m];

    else
    {

    	for(int i=n; i>0; i--)
    	{
    		for(int j=m; j>0; j--)
    		{
    			if(s1[i-1] == s2[j-1])
    				return dp[i][j] = LCS(s1,s2,n-1,m-1) + 1;

    			else
    				return dp[i][j] = max(LCS(s1,s2,n-1,m), LCS(s1,s2,n,m-1));
    		}
    	}
    }
    
return dp[n][m];
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc=1;
    //cin>>tc;
    
    while(tc--) {
       
       memset(dp, -1, sizeof(dp));

       string s1, s2;
       cin>>s1>>s2;
       int n = s1.length(); 
       int m = s2.length();
   
       cout<<LCS(s1, s2, n, m); 
 

    }
}
