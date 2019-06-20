#include<iostream>
#include<vector>
#include<queue>
using namespace std;
void BFS(vector<int> graph[],bool visited[]);
int main()
{
	 int v,e;
	 cin>>v>>e;
	 vector<int> graph[v];
	 for(int i=0;i<e;i++)
	 {     int u,v;
	 	  cin>>u>>v;
	 	  graph[v].push_back(u);
		  graph[u].push_back(v);	 	  
	 }
	 
	 bool visited[v]={false};
	 
	 BFS(graph,visited);
	 
	 return 0;
}

void BFS(vector<int> graph[],bool visited[])
{
	queue<int> q;
	q.push(0);
	visited[0]=true;
	while(!q.empty())
	{
		int i=q.front();
		q.pop();
		for(int j=0;j<graph[i].size();j++)
		{
			if(!visited[graph[i][j]])
			{	q.push(graph[i][j]);
				visited[graph[i][j]]=true;
			}
		}
		cout<<i<<" ";
	}
}
