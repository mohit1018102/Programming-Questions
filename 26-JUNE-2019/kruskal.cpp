//kruskal algorithm
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
//             weigh    s    d
typedef vector<pair<int,pair<int,int> > > graph;
int findparent(int i,int parent[])
{
	if(parent[i]==i) return i;
	else
	return findparent(parent[i],parent);
}
void unionsd(int s,int d,int parent[])
{
	int ps=findparent(s,parent);
	int pd=findparent(d,parent);
	parent[pd]=ps;
}

graph kruskal(graph g,int v,int e)
{
	int parent[v];
	for(int i=0;i<v;i++) parent[i]=i;
	sort(g.begin(),g.end());
	graph mst;
	for(int i=0;i<e;i++)
	{   int s=g[i].second.first;
	    int d=g[i].second.second;
		if(findparent(s,parent)!=findparent(d,parent))
		{ unionsd(s,d,parent);
		  mst.push_back(g[i]);
		}
	}
	return mst;
}
int main()
{ graph g,min;
  int v,e;
  cin>>v>>e;
  int i;
  for(i=0;i<e;i++)
  {
  	int s,d,w;
  	cin>>s>>d>>w;
  	g.push_back(make_pair(w,make_pair(s,d)));
  }
  
  min=kruskal(g,v,e);
  int x=min.size();
  for(i=0;i<x;i++)
  {
  	cout<<min[i].second.first<<" "<<min[i].second.second<<" "<<min[i].first<<endl;
  }
  return 0;
	
}
