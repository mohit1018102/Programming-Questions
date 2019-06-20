#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int minimum(int key[],int p[],int v);
vector<int> dijkstra(int graph[][100],int key[],int parent[],bool p[],int v);

int main()
{
	int v,e;
	cin>>v>>e;
	
	bool processed[v]={false};
	int key[v],parent[v],graph[v][100]={0};
	
	
	for(int i=0;i<e;i++)
	{
		int u,v,w;
		cin>>u>>v>>w;
		graph[v][u]=graph[u][v]=w;
	}
	
	for(int i=0;i<v;i++)
	{ key[i]=INT_MAX;
	  parent[i]=-1;
	}
	key[0]=0;

	vector<int> mst=dijkstra(graph,key,parent,processed,v);
	
	for(int i=0;i<mst.size();i++) cout<<mst[i]<<" ";
	cout<<endl;
	int sum=0;
	for(int i=0;i<v;i++)
	  {
	  	sum=sum+key[i];
	  	cout<<key[i]<<" ";
	  }
	cout<<"\nmin cost : "<<sum<<endl;
	for(int i=0;i<v;i++)
	{ cout<<parent[i]<<" ";
		
	  }  
	return 0;
	
}

int minimum(int key[],bool p[],int v)
{
	int min=INT_MAX;
	int ind=-1;

	for(int i=0;i<v;i++)
	{
		if(min>key[i] && !p[i] )
		{
			ind=i;
			min=key[i];
		} 
	}
	
	return ind;
}

vector<int> dijkstra(int graph[][100],int key[],int parent[],bool p[],int v)
{   int c;
  vector<int> mst;
	while((c=minimum(key,p,v))!=-1)
	{   mst.push_back(c);
	    p[c]=true;
		for(int i=0;i<v;i++)
		{
			if(graph[c][i]!=0 && key[i]>graph[c][i]+key[c])
			{
				parent[i]=c;
				key[i]=graph[c][i]+key[c];
			}
		}
	}
	
	return mst;
}

