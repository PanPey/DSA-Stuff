#include <bits/stdc++.h>
using namespace std;

vector<int>arr[100001];
int vis[100001];

void dfs(int node)
{
    vis[node]  = 1;
    for(int child:arr[node])
      if(!vis[child])
      dfs(child);

}

int main()
{
   
   
   int n,m,u,v;
     cin>>n>>m;

  for(int i=1; i<=m; i++)
       {cin>>u>>v;
        arr[u].push_back(v);
        arr[v].push_back(u);
       }
      int cc = 0;
    
     for(int i=1; i<=n; i++)
        if(!vis[i])
          dfs(i), cc++;
     

  cout<<cc;

}

}
