// Undirected Graph
// Using BFS
bool bfsDetectCycle(int node, vector<int>adj[], int vis[]){
      
         queue<pair<int, int>>q;
         vis[node]=1;
         q.push({node, -1});

         while(!q.empty()){
           int curr = q.front().first;
           int par = q.front().second;
           q.pop();

           for(auto it: adj[curr]){
            if(!vis[it]){
                vis[it]=1;
                q.push({it, curr});
            }
            else if(par!=it){
                return true;
            }
           }
      }
     return false;

    }

    bool checkCycle(vector<int>adj[], int vis[]){

      for(int i=0; i<n; i++){
        if(!vis[i]){
            if(bfsDetectCycle(i, adj, vis))
                return true;
        }
      }
       return false;

    }


// Directed Graph
// Using DFS








//Note: In DG Cycle detection can also be checked using BFS Topo SOrt(Kahn's)
// If Topo sort can't be generated then the graph must be cyclic.








