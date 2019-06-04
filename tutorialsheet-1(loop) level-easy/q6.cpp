#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	int n;
	int rev,x;
	while(t--)
	{
		cin>>n;
		x=n;
		rev=0;
		while(x>0)
		{
			rev*=10;
			rev=rev+x%10;
			x=x/10;
		}
		if(rev==n) cout<<"yes"<<endl;
		else
		 cout<<"no"<<endl;
	}
	return 0;
}
