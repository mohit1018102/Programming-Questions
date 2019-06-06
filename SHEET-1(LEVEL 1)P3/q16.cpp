
#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	unsigned int res=2*((1<<n)-1)/(2-1);
	cout<<res;
	return 0;
}
