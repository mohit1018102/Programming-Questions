#include<iostream>
using namespace std;
int main()
{
	int x;
	cin>>x;
	double numerator=x;
	double denominator=1;
	double sum=1;
	double temp;
	int num=2;
	do
	{
		temp=numerator/denominator;
		sum+=temp;
		numerator*=x;
		denominator*=num;
		num++;
	}while(temp>10e-7);
	
	cout<<sum<<" ";
	
	return 0;
}
