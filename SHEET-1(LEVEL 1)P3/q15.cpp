//T(n)=ar^(n-1)
#include<iostream>
using namespace std;
int main()
{
	int  n;
	cin>>n;
	unsigned int res=2<<(n-1);
	cout<<res;
	return 0;
	
}
