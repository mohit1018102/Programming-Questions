#include<iostream>
using namespace std;
int main()
{
	int rows,cols;
	cin>>rows>>cols;
	int i,j;
	for(i=rows-1;i>=0;i--)
	{
		for(j=0;j<rows-i-1;j++) cout<<" ";
		for(j=0;j<cols;j++)
		{
			if(i==0 || i==rows-1 || j==0 || j==cols-1) cout<<"*";
			else
			  { cout<<" ";
			  }
		}
		cout<<endl;
	}
	return 0;
}
