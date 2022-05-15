#include <bits/stdc++.h>
using namespace std;

class Graph
{
	int V;
	map<int,vector<int>>adj;
	
public:
	Graph(int V)
	{
		this->V=V;		
	}		
	
	void addedge(int a,int b)
	{
		adj[a].push_back(b);
		adj[b].push_back(a);	
	}	
	
	void bfs(int src)
	{
		queue<int>q;
		q.push(src);
		bool visited[6]={false};
		visited[src]=true;
		while(!q.empty())
		{
			int node=q.front();
			q.pop();
			cout<<node<<" ";
			for(int i:adj[node])
			{
				if(!visited[i])
				{
					q.push(i);
					visited[i]=true;
				}
			}
		}
	}
};

int main()
{
	Graph g(5);
	g.addedge(0,1);
	g.addedge(2,1);
	g.addedge(2,3);
	g.addedge(0,3);
	g.addedge(4,3);
	g.addedge(4,5);
	g.bfs(0);
	
}
