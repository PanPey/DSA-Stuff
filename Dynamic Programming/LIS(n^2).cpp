#include <iostream>
#include <algorithm>
#include <array>
#include <cmath>
#include <cstring>
#include <map>
#include <set>
#include <vector>

using namespace std;

using ll = long long;


//longest increasing subsequence length

int lis(string a){

   int n = a.length();
   vector<int >dp(n+1, 1);

   for(int i=0; i<n; i++){
      for(int j=0; j<i; j++){
         if(a[j] < a[i])
         dp[i] = max(dp[i], dp[j]+1);

      }
   }
 int ans =dp[0];
 for(int i=1; i<n; i++){
   ans = max(ans, dp[i]);
 }

 return ans;

}


void solve(){

  string a = "abbbbcdefg";
  cout << lis(a);


}

int main(){
   int t=1;
   //cin >> t;
   for(int i=0; i<t; i++){
   	    solve();
   }
}
