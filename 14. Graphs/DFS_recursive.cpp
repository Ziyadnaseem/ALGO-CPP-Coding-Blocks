#Recursive

void dfs(int u,vector<int>adj[],int visited[],vector<int>&res)
{
	visited[u]=1;
    res.push_back(u);
	for(auto i: adj[u])
	{
       	if(!visited[i])
		{
        	dfs(i,adj,visited,res);
    	}
	}
}
	
vector<int>dfsOfGraph(int V, vector<int> adj[])
{
    int visited[V]={0};
    vector<int>res;
    dfs(0,adj,visited,res);
    return res;
}
