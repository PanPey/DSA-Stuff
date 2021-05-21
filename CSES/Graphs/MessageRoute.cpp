#include "bits/stdc++.h"
using namespace std;

#define int long long 

vector<int>adj[100001];
int vis[100001];
int dis[100001];
int parent[100001];

void bfs(int source){
	queue<int>q;
	q.push(source);
	vis[source]=1;
	dis[source]=0;
	parent[source]=-1;

	while(!q.empty()){
		int curr = q.front();
		q.pop();
		for(int child:adj[curr]){
			if(!vis[child]){
			  q.push(child);
              vis[child]=1;
              dis[child]=1+dis[curr];
              parent[child]=curr;
           }
		}
	}
}

void solve(){
 
    int n, m, a, b;
    cin >> n >> m;


       for(int i=1; i<=n; i++)
       {
           adj[i].clear();
           vis[i]=0;
       }
    
  
    for(int i=0; i<m; i++){
    	cin >> a >> b;
    	adj[a].push_back(b);
    	adj[b].push_back(a);

    }

    bfs(1);

    if (!dis[n]) {
      cout << "IMPOSSIBLE";
     } 
     else {
    vector<int> path;
    for (int v = n; v != -1; v = parent[v])
        path.push_back(v);
    reverse(path.begin(), path.end());
    cout << dis[n]+1 << "\n";
    for (int v : path)
        cout << v << " ";
    }



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

/*

  |-----------|
  |           |
  3-----1----2
        |
        |
        4----5               O/P= 1->4->5 


*/
