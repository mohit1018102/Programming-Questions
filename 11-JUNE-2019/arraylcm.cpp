#include<iostream>
#include "gcd.h"
using namespace std;
int lcm(int a,int b)
{
	return ((a*b)/gcd(a,b));
}

int main()
{
	int n;
	cin>>n;
	int arr[n];

	for(int i=0;i<n;i++)
	{
	  cin>>arr[i];
	}

	int x=arr[0];

	for(int i=1;i<n;i++)
	{
	    x=lcm(x,arr[i]);
	}

	cout<<x<<endl;
	return 0;

}