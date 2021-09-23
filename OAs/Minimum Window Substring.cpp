#include "bits/stdc++.h"
using namespace std;

#define int                          long long int 
#define ld                           long double
#define mod                          1000000007
#define vi                           vector<int>
#define vvi                          vector<vector<int>>  
#define pb                           push_back
#define all(x)                       (x).begin(), (x).end()
#define rall(x)                      x.rbegin(), x.rend()
#define rep(i,a,b)                   for(int i=a; i<b; ++i)
#define repd(i,a,b)                  for(double i=a; i<b; ++i)
#define per(i,a,b)                   for(int i=b-1;i>=a;i--)
#define sz(x)                        ((int)(x).size())
#define endl                         '\n'
#define output_vector(A)             for (auto i: A) cout << i << " "; cout << '\n'

int Minimum_Window(string s, string t)
{

  int m[256] = { 0 };

  int ans = INT_MAX; 
  int start = 0; 
  int count = 0;

  for (int i = 0; i < t.length(); i++) {
    if (m[t[i]] == 0)
      count++;
    m[t[i]]++;
  }

  int i = 0;
  int j = 0;

  while (j < s.length()) {
    m[s[j]]--;
    if (m[s[j]] == 0)
      count--;

    
    if (count == 0) {
      while (count == 0) {
    
        if (ans > j - i + 1) {
          ans = min(ans, j - i + 1);
          start = i;
        }

        m[s[i]]++;
        if (m[s[i]] > 0)
          count++;

        i++;
      }
    }
    j++;
  }

  if (ans != INT_MAX)
    return ans;
  else
    return -1;
}

  
void solve() {
 
 string s = "ABCDEFGHIJKLKLKLKLKKMNOPQRSTKLKLKLUVWXYZ";
 string t = "ABCDEFGHIKLMNOPQRSTUVXYZ";

 cout << Minimum_Window(s, t);

}
