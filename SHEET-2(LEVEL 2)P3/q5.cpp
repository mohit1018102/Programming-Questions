#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int x;
	if(n==1 || n==2) cout<<1;
	else
	if(n%2==0)
	{   x=n/2;
		cout<<pow(3,x-1);
	}
	else
	{   x=floor(n/2);
		cout<<pow(2,x);
	}
	return 0;
}
