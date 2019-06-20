#include<iostream>
#include<vector>
using namespace std;
void DFS(vector<int> graph[],bool visited[], int v);
void DFSutil(vector<int> graph[], bool visited[], int i);
int main()
{
	int v;
	int e;
	cin>>v>>e;
	
	vector<int> graph[v];
	
	for(int i=0;i<e;i++)
	{ int u,v;
	  cin>>u>>v;
	  graph[u].push_back(v);
	  graph[v].push_back(u);
	}
	bool visited[v]={false};
	DFS(graph,visited,v);
	return 0;
}
void DFSutil(vector<int> graph[], bool visited[], int i)
{
    cout<<i<<" ";
    visited[i]=true;
    
    for(int j=0;j<graph[i].size();j++)
    {
    	if(!visited[graph[i][j]])
    	{
    		DFSutil(graph,visited,graph[i][j]);
		}
	}
}

void DFS(vector<int> graph[],bool visited[], int v)
{
	int i=0;
	
	for(i=0;i<v;i++)
	{ if(!visited[i])
	  {
	  	DFSutil(graph,visited,i);
	  }
		
	}
}
