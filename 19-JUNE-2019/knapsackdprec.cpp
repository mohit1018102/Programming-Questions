#include<iostream>
using namespace std;
int knapsack(int w[],int v[],int item,int k);
int dpknap(int w[],int v[],int it,int k);
int main()
{   int item, knap;
	cin>>item;
	cin>>knap;
	int w[item+1],v[item+1];
	for(int i=1;i<item+1;i++)
	{
		cin>>w[i]>>v[i];
	}
	cout<<"Recursion : "<<knapsack(w,v,item,knap)<<endl;
	cout<<"Dynamic programming :"<<dpknap(w,v,item,knap)<<endl;
	return 0;
}

int knapsack(int w[],int v[],int item,int k)
{
	if(k==0) return 0;
	if(item==0) return 0;
	if(w[item]>k) return knapsack(w,v,item-1,k);
	else
	{
		return max(knapsack(w,v,item-1,k),v[item]+knapsack(w,v,item-1,k-w[item]));
	}
}

int dpknap(int w[],int v[],int it,int k)
{
	int solve[it+1][k+1]={};
	int i,j;

	
	for(i=1;i<it+1;i++)
	{
		for(j=1;j<k+1;j++)
		{ 
			if(w[i]>j) solve[i][j]=solve[i-1][j];
			else
			 solve[i][j]=max(solve[i-1][j],v[i]+solve[i-1][j-w[i]]);
			 cout<<solve[i][j]<<" ";
		}
		cout<<endl;
	}
	return solve[it][k];
}

