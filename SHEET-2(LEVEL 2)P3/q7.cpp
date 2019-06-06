#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int i,j;
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==0 || i==n-1) cout<<j+1;
			else
			if(j==n-i-1) cout<<j+1;
			else 
			  cout<<" ";
		}
		cout<<endl;
	}
	return 0;
}
