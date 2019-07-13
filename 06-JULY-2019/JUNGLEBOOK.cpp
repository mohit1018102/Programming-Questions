#include<bits/stdc++.h>
using namespace std;


void bfs(vector<int> preys[],int depth[],int i)
{
	queue<int> q;
	q.push(i);
	while(!q.empty())
	{
		int pred=q.front();
		q.pop();
		int x=preys[pred].size();
		for(int j=0; j<x;j++)
		{   q.push(preys[pred][j]);
			depth[preys[pred][j]]=depth[pred]+1;
		}
	}
}

int minimumset(vector<int> animal)
{
	int n=animal.size();
	vector<int> preys[n];
	for(int i=0;i<n;i++)
	{
		if(animal[i]!=-1)
		{
			preys[animal[i]].push_back(i);
		}
	}
	int depth[n]={0};
	for(int i=0;i<n;i++)
	{ 
	    if(animal[i]==-1)
	   { depth[i]=1;
	     bfs(preys,depth,i);
	   }
	}
   int max=-1;
   for(int i=0;i<n;i++)
   {
   	if(depth[i]>max) max=depth[i];
   }
   
   return max;
}




int main()
{
	int n;
	cin>>n;
	vector<int>  animal(n);
	
	for(int i=0;i<n;i++)
	{
		cin>>animal[i];
	}
	cout<<minimumset(animal);
	return 0;
}
