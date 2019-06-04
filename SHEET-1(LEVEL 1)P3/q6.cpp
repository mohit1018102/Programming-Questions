#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int i,j;
	int num=1,sign=1;
	for(i=0;i<n;i++)
	{
		for(j=0;j<=i;j++) {
		cout<<sign*num; num=num+1;}
		sign=-1*sign;
		cout<<endl;
	}
	
	return 0;
}
