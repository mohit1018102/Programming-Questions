#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int num=n;
	int i,j;
	
	for(i=0;i<=n;i++)
	{
		for(j=0;j<=i;j++) cout<<num;
		num++;
		cout<<endl;
	}
	num-=2;
	for(i=n-1;i>=0;i--)
	{
		for(j=0;j<=i;j++) cout<<num;
		num--;
		cout<<endl;
	}
	return 0;
	
}
