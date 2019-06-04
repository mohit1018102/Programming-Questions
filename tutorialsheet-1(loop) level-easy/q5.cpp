#include<iostream>
using namespace std;
int hcf(int,int);
int main()
{
	int a,b;
	cin>>a>>b;
	cout<<hcf(a,b);
	return 0;
}
int hcf(int a,int b)
{
	if(a%b==0) return b;
	else
	  return hcf(b,a%b);
}

