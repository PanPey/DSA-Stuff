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
