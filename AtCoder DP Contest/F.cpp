#include "bits/stdc++.h"
using namespace std;

#define int long long int
const int inf = 1e18;


int dp[3000][3000];
int select[3000][3000];

void solve(){

	string s,t;
	cin >> s >> t;
  
    int n = s.size(), m = t.size();

    dp[0][0] = 0;

    if(s[0] == t[0])
    {
    	dp[0][0] = 1;
    	select[0][0] = 2;

    }
  
    for(int i=0; i<n; i++){
    	for(int j=0; j<m; j++){
    		if(i>0){
    			dp[i][j] = dp[i-1][j];
    			select[i][j] = 0;
    		}

    		if(j>0){
    			if(dp[i][j-1] > dp[i][j]){
                    dp[i][j] = dp[i][j-1];
    	     	        select[i][j] = 1;
     		  }

    		}

    		if(s[i] == t[j]){
    			int cnt = 1;
    			if(i>0 && j>0){
                   cnt = 1 + dp[i-1][j-1];}
                   if(cnt > dp[i][j]){
                   	dp[i][j] = cnt;
                    select[i][j] = 2;
                   }
    			 }
    	}
    }   
 

   string ans;
   int i=n-1, j=m-1;
   while(i>=0 && j>=0){
        if(select[i][j] == 0) i--;
        else if(select[i][j] == 1) j--;
        else
        {
        	ans.push_back(s[i]);
        	i--;
        	j--;
        }
   }


 reverse(ans.begin(), ans.end());

cout << ans;

}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);      	
                     
    int t=1;
    //cin >> t;
    while(t--){
      solve();   
  }
}


