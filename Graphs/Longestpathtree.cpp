#include<bits/stdc++.h>
using namespace std;

vector<int>arr[10001];
int vis[10001];
int maxD, maxNode; 

void dfs(int node, int d){
      vis[node]=1;
      
      if(d>maxD){
       maxNode = node;
       maxD = d;}
       for(int child:arr[node])
       {
           if(!vis[child])
           {
               dfs(child, d+1);
           }
       }
}

int main()
{
    int n, a, b;
    cin>>n;

    for(int i=1; i<=n-1; i++)
    {
        cin>>a>>b;
        arr[a].push_back(b);
        arr[b].push_back(a);
    }

     maxD = -1;
     dfs(1, 0);

     for(int i=1; i<=n; i++)
     {
         vis[i]=0;
     } 


     maxD=-1;
     dfs(maxNode, 0);

     cout<<maxD;
}