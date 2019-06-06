#include<iostream>
using namespace std;
int main()
{
	unsigned int k;
	cin>>k;
	unsigned int n1=2;
	unsigned int n2=10;
	unsigned int r=2*k;
	unsigned int sum=0;
	for(int i=0;i<r;i++)
	{
		if(i%2==0) 
		{ sum+=n1;
		  n1=n1*3;
		}
		else
		{
			sum+=n2; n2=n2*2;
		}
	}
	cout<<sum<<endl;
	return 0;
	
}
