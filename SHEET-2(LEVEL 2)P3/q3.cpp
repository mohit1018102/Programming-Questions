#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int start=(n*n)+1;
	int diff=n-1;
	int num=1;
	int i,j,value;
	
	for(i=n-1;i>=0;i--)
	{   value=start;
		for(j=0;j<n-i-1;j++) cout<<"  ";
		for(j=0;j<=i;j++) cout<<num++<<"*";
		for(j=0;j<=i;j++)
		{ 
			cout<<value++;
			if(j!=i) cout<<"*";
		}
		start=start-diff;
		diff--;
		cout<<endl;
	}
}
