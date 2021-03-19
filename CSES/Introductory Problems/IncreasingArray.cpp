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
  
    int  n;
    cin >> n;
    int a[n];
 
    for(int i=0; i<n; i++){
      cin >> a[i];
    }   
  
    int cnt=0; 
    for(int i=0; i<n; i++){
      if(a[i+1]-a[i]<0){
        cnt += a[i] - a[i+1];
        a[i+1] = a[i];
        
      }
    }

      cout << cnt;
     

   }
return 0;
}
