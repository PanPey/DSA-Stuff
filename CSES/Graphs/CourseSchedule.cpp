#include "bits/stdc++.h"
using namespace std;

#define int                              long long int 
#define ld                               long double
#define mod                              1000000007
#define pb                               push_back
#define all(x)                           (x).begin(), (x).end()
#define rall(x)                          x.rbegin(), x.rend()
#define rep(i,a,b)                       for(int i=a; i<b; ++i)
#define per(i,a,b)                       for(int i=b-1;i>=a;i--)
#define sz(x)                            ((int)(x).size())
#define endl                             '\n'
#define output_vector(A)                 for (auto i: A) cout << i << " "; cout << '\n'

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

int n, m, a, b;
void toposort(vector<int>adj[], vector<int>indegree, vector<int> &ans){

  queue<int>q;

  for(int i=1; i<=n; i++){
    if(indegree[i]==0)
      q.push(i);
  }

  while(!q.empty()){
    int node = q.front();
    q.pop();
    ans.push_back(node);

    for(int i : adj[node]){
      --indegree[i];
      if(indegree[i]==0)
        q.push(i);
    }
  }
  
}

void solve(){
 
  cin >> n >> m;
  
  vector<int>indegree(n+1), ans;
  vector<int> adj[n+1];
  for(int i=0; i<m; i++){
    cin >> a >> b;
    adj[a].push_back(b);
    ++indegree[b];
  }

  toposort(adj, indegree, ans);

  if(ans.size()!=n)
    cout << "IMPOSSIBLE";
  else{
    for(auto i : ans)
      cout << i << " "; 
  }

  //debug(ans);

}

signed main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(nullptr);
   cout.tie(nullptr);

   int tests=1;
  // cin >> tests;
   while(tests--){
     solve();
   } 
}




