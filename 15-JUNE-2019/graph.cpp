#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
typedef vector<pair<int,pair<int,int> > > graph;

int findparent(int a,int parent[])
{
     if(a==parent[a]) return a;
     else
      findparent(parent[a],parent);
}
void union1(int u,int v,int parent[])
{
   int pu=findparent(u,parent);
   int pv=findparent(v,parent);
   parent[pu]=pv;
}
graph kruskal(graph g1,int parent[])
{ sort(g1.begin(),g1.end());
  int n=g1.size();
  graph g2;
  int i;
  for(i=0;i<n;i++)
  {
     int u,v;
     u=g1[i].second.first;
     v=g1[i].second.second;

     if(findparent(u,parent)!=findparent(v,parent))
     {
        g2.push_back(g1[i]);
        union1(u,v,parent);
     }
   }

   return g2;
        
}
   
int main()
{  /*<weight,<source,destination> >*/
   graph g1;
   
   cout<<"node number 0,1,2,3,4.......\n";
   
    int n;
    int w,u,v;
    int nodes;
    cin>>nodes;
    cin>>n;
    int parent[nodes];
    int i;
    for(i=0;i<nodes;i++) parent[i]=i;
     
    for(i=0;i<n;i++)
    {  cin>>w>>u>>v;
       g1.push_back(make_pair(w,make_pair(u,v)));
    }

   for(i=0;i<n;i++)
   {
       cout<<g1[i].first<<" "<<g1[i].second.first;
       cout<<g1[i].second.second<<endl;
    }

   
    graph min_span=kruskal(g1,parent);
     int sum=0;
     int nx=0;
     nx=min_span.size();
     cout<<"number of edges : "<<nx<<endl;
     for(i=0;i<nx;i++) sum+=min_span[i].first;
     cout<<sum<<endl;
   
    return 0;
}
