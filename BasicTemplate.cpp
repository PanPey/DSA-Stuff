#include "bits/stdc++.h"   //precompile header files for faster compilation time in loacal machine
using namespace std;

#define int              long long
#define ld               long double
#define mod              1000000007
#define pb               push_back
#define vi               vector<int>
#define all(x)           x.begin(), x.end()
#define rall(x)          x.rbegin(), x.rend()
#define rep(i,a,b)       for(int i=a; i<b; ++i)
#define endl             '\n'

void __print(int x) {cerr << x;}
void __print(float x) {cerr << x;}
void __print(double x) {cerr << x;}
void __print(long double x) {cerr << x;}
void __print(char x) {cerr << '\'' << x << '\'';}
void __print(const char *x) {cerr << '\"' << x << '\"';}
void __print(const string &x) {cerr << '\"' << x << '\"';}
void __print(bool x) {cerr << (x ? "true" : "false");}

template<typename T, typename V>
void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}';}
template<typename T>
void __print(const T &x) {int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? "," : ""), __print(i); cerr << "}";}
void _print() {cerr << "]\n";}
template <typename T, typename... V>
void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}
#ifndef ONLINE_JUDGE
#define debug(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define debug(x...)
#endif
void inout()
{
    #ifndef ONLINE_JUDGE
    freopen("Input.txt", "r", stdin);
    freopen("Output.txt", "w", stdout);
    freopen("Error.txt", "w", stderr);
    #endif // ONLINE_JUDGE
}

void preCalculation(){

}

void run_case(){
  //preCalculation();
}
signed main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(nullptr); cout.tie(nullptr);      
   inout();                     
   int t;
   cin >> t;
   while(t--){
    solve(); 
 }
}
