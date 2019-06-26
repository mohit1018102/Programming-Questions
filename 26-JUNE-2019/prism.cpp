//prism

#include<iostream>
#include<algorithm>
#include<vector>
#include<climits>
using namespace std;
typedef vector<pair<int,int> > graph;
int minimum(int value[],int v,bool visited[])
{
	int min=INT_MAX,ind=-1;
	for(int i=0;i<v;i++)
	{
		if(!visited[i] && min>value[i])
		{ min=value[i]; ind=i;
		}
	}
	return ind;
}
void prism(graph g[],int value[],int parent[],int v)
{
	bool visited[v]={false};
	int min;
	while((min=minimum(value,v,visited))!=-1)
	{  
	   int n=g[min].size();
	   for(int i=0;i<n;i++)
	   {
	   	 if(!visited[g[min][i].second] && value[g[min][i].first]>g[min][i].second)
	   	 { value[g[min][i].first]=g[min][i].second;
	   	   parent[g[min][i].first]=min;
		 }
	   }
	   visited[min]=true;
	}
}
int main()
{  int v,e;
   cin>>v>>e;
   graph g[v];
   
   for(int i=0;i<e;i++)
   {  int s,d,w;
      cin>>s>>d>>w;
      g[s].push_back(make_pair(d,w));
      g[d].push_back(make_pair(s,w));
   }
   
   int value[v];
   int parent[v];
   for(int i=0;i<v;i++) 
   {
   	value[i]=INT_MAX;
   	parent[i]=-1;
   }
   value[0]=0;
   prism(g,value,parent,v);
   
   for(int i=0;i<v;i++)
   {
   	 cout<<i<<" "<<parent[i]<<" "<<value[i]<<endl;
   }
   return 0;
}
