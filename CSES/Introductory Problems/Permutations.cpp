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

    vector<int>v;
    
    if(n==1)
      cout << 1;

    else if(n<=3)
      cout << "NO SOLUTION";

   else if(n==4){
      cout << 3 << " "<< 1 << " " << 4 << " " << 2;
    }

else{
    for(int i=1; i<=n; i++){
      if(i%2!=0){
        v.pb(i);
      }
    }
   
   for(int j=1; j<=n; j++){
     if(j%2==0){
        v.pb(j);
      }
   }

   for(int i=0; i<v.size(); i++){
    cout << v[i] << " ";

   }
 }

   }
return 0;
}
