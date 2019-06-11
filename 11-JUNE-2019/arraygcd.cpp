#include<iostream>
#include "gcd.h"
using namespace std;
int main()
{
	 int n;
	 cin>>n;
	 int arr[n];

	 for(int i=0;i<n;i++) cin>>arr[i];
	 int x=arr[0];

	for(int i=1;i<n;i++) 
	{
		x=gcd(x,arr[i]);
	}
	cout<<x;
	return 0;

}