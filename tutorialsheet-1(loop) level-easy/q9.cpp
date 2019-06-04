#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int f=0,s=1,next=0;
	for(int i=1;i<=n;i++)
	{
		if(i==1) cout<<0;
		else if(i==2) cout<<1;
		else
		{
			next=f+s;
			f=s;
			s=next;
			cout<<next;
		}
		if(i!=n) cout<<",";
	}
	return 0;
}
