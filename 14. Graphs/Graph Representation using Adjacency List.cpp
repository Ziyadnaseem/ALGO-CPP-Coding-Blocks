#include<bits/stdc++.h>
using namespace std;

class Graph
{
	int V;
	vector<int>*adj;
public:
	Graph(int V)
	{
		this->V=V;
		adj= new vector<int>[V];
	}
	
	void addedge(int x,int y)
	{
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	
	void printadjlist()
	{
		for(int i=0;i<V;i++)
		{
			cout<<i<<"-> ";
			for(int j:adj[i])
			{
				cout<<j<<" ";
			}
			cout<<endl;
		}
	}	
};

int main() 
{
	Graph g(4);
	g.addedge(0,1);
	g.addedge(0,2);
	g.addedge(0,3);
	g.addedge(2,1);
	g.addedge(3,2);
	g.printadjlist();
	return 0;
}
