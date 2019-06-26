#include<iostream>
using namespace std;
int numberofways(int n,int k)
{
	if(n==0) return 1;
	if(k==0) return 0;
	if(k>n) return numberofways(n,k-1);
	return numberofways(n,k-1)+numberofways(n-k,k);
}
int numberofwaysdp(int n,int k)
{
	int way[n+1][k+1];
	for(int i=0;i<n+1;i++)
	{
		for(int j=0;j<k+1;j++)
		{
			if(i==0) way[i][j]=1;
			else
			if(j==0) way[i][j]=0;
			else
			if(j>k) way[i][j]=way[i][j-1];
			else
			way[i][j]=way[i][j-1]+way[i-j][j];
		}
	}
	return way[n][k];
}
int main()
{
	int n,k;
	cin>>n>>k;
	cout<<numberofways(n,k);
	cout<<numberofwaysdp(n,k);
	return 0;
}
