// Note--->  Topo Sort is only possible in DAG
// Method 1 --- using DFS 
// TC ---> O(V+E)
// SC ---> O(V+V) for stack and visited array and also aux. space due to dfs recursion

class Solution
{
	public:
	
	void dfs(int V, vector<int> adj[],vector<int> &vis, stack<int> &st, int node){
   
            vis[node]=1;
            
            for(auto it: adj[node]){
                if(!vis[it])
                  dfs(V, adj, vis, st, it);
            }
   	    st.push(node);
	} 
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	   
	    vector<int>vis(V, 0);
	    stack<int>st;
	    
	    for(int i=0; i<V; i++){
	        if(!vis[i])
	          dfs(V, adj, vis, st, i);
	    }
	    
	    vector<int>ans; 
	    while(!st.empty()){
	        ans.push_back(st.top());
	        st.pop();
	    }
	    
	    return ans;
	}
};


// Method 2---> using BFS, also known as Kahn's Algo
class Solution
{
	public:
	//Function to return list containing vertices in Topological order. 
	vector<int> topoSort(int N, vector<int> adj[]) 
	{
	    queue<int>q;
	    vector<int>ans;
	    vector<int>inDegree(N, 0);
	    
	    for(int i=0; i<N; i++){
	        for(auto it:adj[i]){
	            inDegree[it]++;
	        }
	    }
	    
	    for(int i=0; i<N; i++){
	        if(inDegree[i]==0)
	          q.push(i);
	    }
	    
	    while(!q.empty()){
	        int node = q.front();
	        q.pop();
	        ans.push_back(node);
	        
	        for(auto it: adj[node]){
	            inDegree[it]--;
	            if(inDegree[it] == 0){
	                q.push(it);
	            }
	        }
	    }
	    
	 return ans;
	}
};

// TC ---> O(N+E)
// SC --->  O(N)
