#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	unsigned int fact=1;
	int i;
	for(i=2;i<=n;i++)
	{
		fact*=i;
	}
	cout<<fact;
	return 0;
}
