#include <bits/stdc++.h>
using namespace std;

#define int long long 
#define ld long double
#define pb push_back
#define all(x) begin(x),end(x)
#define endl "\n"
#define mod  1000000007
#define fastio() ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b); 
     
}

int lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}

signed main()
{
  fastio();
   int t=1;
   //cin >> t;
   while(t--){
   int n;
   cin >> n;
    int a[n-1];
    for(int i=1; i<n; i++){
      cin >> a[i];
    }

    int sum = 0;
    for(int i=1; i<n; i++){
      sum += a[i];
    }

   int x = n*(n+1)/2 - sum;
   cout << x;


   }
return 0;
}
