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
 
   cout << n <<" ";
   while(n!=1){
    if(n%2==0)
      n /=2;

    else
      n = 3*n + 1;

   cout << n << " ";  

   } 
   }
return 0;
}
